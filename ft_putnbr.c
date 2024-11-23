/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:25:18 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/23 11:34:30 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putnbr(int n)
{
    long nb = (long)n;
    int count;

    count = 0;
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
        count += 2;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
        count++;
    }
    if (nb > 9)
    {
        count += ft_putnbr(nb / 10);
        count += ft_putnbr(nb % 10);
        //count++;
    }
    else
       count += ft_putchar(nb + 48);
       
    return (count);
}
