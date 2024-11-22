/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:25:18 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 23:06:42 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int     ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        return ft_putchar(nb + 48);
}