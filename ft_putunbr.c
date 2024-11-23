/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:51:11 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/23 11:57:58 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putunbr(unsigned int nb)
{
    //long nb = (long)n;
    int count;

    count = 0;
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
