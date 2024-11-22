/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:43:07 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 23:05:18 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthexa(unsigned int n)
{
	char	hexa[16] = "0123456789abcdef";

	if (n >= 16)
	{
		ft_puthexa(n / 16);
	}
	ft_putchar(hexa[n % 16]);
	return (n);
}
