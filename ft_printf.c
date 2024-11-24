/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:20:48 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/24 13:19:22 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatcheck(va_list args, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (c == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		i += ft_printptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		i += ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		i += ft_puthexa(va_arg(args, unsigned int));
	else if (c == 'X')
		i += ft_putuhexa(va_arg(args, unsigned int));
	else
	{
		i += ft_putchar('%');
		i += ft_putchar(c);
	}
	return (i);
}

int	ft_printf(const char *formats, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	va_start(args, formats);
	if (formats == NULL)
		return (-1);
	while (formats[j] != '\0')
	{
		if (formats[j] == '%' && formats[j + 1] != '\0')
		{
			j++;
			if (formats[j] != '%')
				i += ft_formatcheck(args, formats[j]);
			else
				i += ft_putchar('%');
		}
		else if (formats[j] != '%')
			i += ft_putchar(formats[j]);
		j++;
	}
	va_end(args);
	return (i);
}
