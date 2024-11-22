/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:21:46 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 23:08:06 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int    ft_putstr(char *s);
int    ft_putchar(char c);
int    ft_putnbr(int nb);
int    ft_puthexa(unsigned int n);
int	ft_putunbr(unsigned int nb);
int	ft_printptr(unsigned long long ptr);
int	ft_printf(const char *input, ...);
int    ft_putuhexa(unsigned int n);
char	*ft_strchr(const char *s, int c);
#endif
