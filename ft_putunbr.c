/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:51:11 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 23:07:02 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putunbr(unsigned int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb > 9)
	{
		ft_putunbr(nb / 10);
		ft_putunbr(nb % 10);
	}
	else
		return ft_putchar(nb + 48);
}
