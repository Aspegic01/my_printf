/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:39:29 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/21 20:34:21 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	putptr(unsigned long long ptr)
{
	if (ptr > 15)
	{
		putptr(ptr / 16);
		putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
}

static int	ptrlen(unsigned long long ptr)
{
	int	len;

	len = 0;
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
		putptr(ptr);
		len = len + ptrlen(ptr);
	}
	return (len);
}
