/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:20:48 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 23:20:56 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	check_type(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_putchar((int)arg);
	else if (*input == 's')
		i += ft_putstr((char *)arg);
	else if (*input == 'p')
		i += ft_printptr((unsigned long)arg);
	else if (*input == 'd')
		i += ft_putnbr((int)arg);
	else if (*input == 'i')
		i += ft_putnbr((int)arg);
	else if (*input == 'u')
		i += ft_putunbr((unsigned int)arg);
	else if (*input == 'x')
		i += ft_puthexa((unsigned int)arg);
	else if (*input == 'X')
		i += ft_putuhexa((unsigned int)arg);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
				i += check_type(input, va_arg(args, void *));
			else if (*input == '%')
				i += ft_putchar('%');
		}
		else
			i = i + ft_putchar(*input);
		input++;
	}
	va_end(args);
	return (i);
}
