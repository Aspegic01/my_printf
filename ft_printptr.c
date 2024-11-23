/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:39:29 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/23 12:56:33 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr(unsigned long long ptr)
{
	if (ptr > 15)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
}

static int	ft_ptrlen(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		return (1);
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	write(1, "0x", 2);
	len = 2;
	if (ptr == 0)
	{
		write(1, "0", 1);
		len = len + 1;
	}
	else
	{
		ft_putptr(ptr);
		len = len + ft_ptrlen(ptr);
	}
	return (len);
}
