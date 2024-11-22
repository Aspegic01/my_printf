/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:15:54 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 23:19:14 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
int main()
{
    	char s[] = "hello";
    int i = -648787;
    unsigned int u = 897987;
    int *p = &i;
    printf("---- Testing with original printf ----\n");
    printf("Hello, world!\n");
    printf("%s\n", s);
    printf("%d\n", i);
    printf("%u\n", u);
    printf("%p\n", p);
    printf("%x\n", 74);
    printf("%X\n", 74);
    printf("%c\n", 'a');
    printf("%%\n");

    printf("\n---- Testing with ft_printf ----\n");
    ft_printf("Hello, world!\n");
    ft_printf("%s\n", s);
    ft_printf("%d\n", i);
    ft_printf("%u\n", u);
    ft_printf("%p\n", p);
    ft_printf("%x\n", 74);
    ft_printf("%X\n", 74);
    ft_printf("%c\n", 'a');
    ft_printf("%%\n");
}
