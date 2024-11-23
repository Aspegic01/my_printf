/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:20:48 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/23 11:25:55 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(const char *format, ...)
{
	int	i;
	va_list	args;

	va_start(args, format);
	i = 0;
	if (*format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		i += ft_printptr(va_arg(args, unsigned long long));
	else if (*format == 'd')
		i += ft_putnbr(va_arg(args,int));
	else if (*format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		i += ft_putunbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		i += ft_puthexa(va_arg(args, unsigned int));
	else if (*format == 'X')
		i += ft_putuhexa(va_arg(args, unsigned int));
	return (i);
}

int	ft_printf(const char *formats, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, formats);
	while (*formats != '\0')
	{
		if (*formats == '%')
		{
			formats++;
			if (ft_strchr("cspdiuxX", *formats))
				i += check_type(formats, va_arg(args, void *));
			else if (*formats == '%')
				i += ft_putchar('%');
		}
		else
			i = i + ft_putchar(*formats);
		formats++;
	}
	va_end(args);
	return (i);
}
