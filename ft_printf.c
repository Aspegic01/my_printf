/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:30:55 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 11:18:02 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int ft_printf(const char *format, ...)
{

	va_list list;
	va_start(list,format);
	int i = 0;
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%' && format[i + 1])
				ft_putchar('%');
			else if (format[i] == '%')
				i++;
			else if (format[i] == 's')
				ft_putstr(va_arg(list,char *));
			else if (format[i] == 'c')
				ft_putchar(va_arg(list,int));
			else if (format[i] == 'd' || format[i] == 'i')
				ft_putnbr(va_arg(list,int));
			else if (format[i] == 'x')
				ft_puthexa(va_arg(list,unsigned int));
			else if (format[i] == 'p')
				ft_printptr(va_arg(list,unsigned long int));
			else if (format[i] == 'u')
				ft_putunbr(va_arg(list,unsigned int));
			else if (format[i] == 'X')
				ft_putuhexa(va_arg(list,unsigned int));
		}
		else
			ft_putchar(format[i]);
		i++;   
	}
	return i;
}
