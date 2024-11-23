/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:17:35 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/23 11:42:06 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuhexa(unsigned int n)
{
//	i//char	hexa[16];
	int count;
	char	hexa[16] = "0123456789ABCDEF";

	count = 0;
	if (n >= 16)
	{
		count += ft_putuhexa(n / 16);
	}
	count += ft_putchar(hexa[n % 16]);
	return (count);
}
