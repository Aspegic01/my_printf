/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:21:46 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 10:09:56 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
void    ft_putstr(char *s);
void    ft_putchar(char c);
void    ft_putnbr(int nb);
void    ft_puthexa(unsigned int n);
void	ft_putunbr(unsigned int nb);
int	ft_printptr(unsigned long long ptr);
int ft_printf(const char *format, ...);
void    ft_putuhexa(unsigned int n);
#endif
