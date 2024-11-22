/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:17:35 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 23:05:55 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putuhexa(unsigned int n)
{
//	i//char	hexa[16];

	char	hexa[16] = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putuhexa(n / 16);
	}
	ft_putchar(hexa[n % 16]);
	return (n);
}
