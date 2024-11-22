/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:08:20 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/22 23:17:58 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main() {
    int a = ft_printf("%%%%%%%");
    printf("\n");
    int b = printf("%%%%%%%");
    printf("\n%d-----%d", a, b);
    return 0;
}
#include "printf.h"
#include <stdio.h>
int main()
{
	 char s[] = "hello";
	 int i = 47;	// int *p = &i;
	 ft_printf("hello word\n");
	 ft_printf("%s\n",s);
	 ft_printf("%d\n",-648787);
	 ft_printf("%u\n",897987);
	 ft_printf("%p\n",p);
	 ft_printf("%x\n",74);
	 ft_printf("%X\n",74);
	 ft_printf("%c\n",'a');
	 ft_printf("%i\n",565);
	 printf("hello word\n");
	 printf("%s\n",s);
	 printf("%d\n",-648787);
	 printf("%u\n",897987);
	 printf("%p\n",p);
	 printf("%x\n",74);
	 printf("%X\n",74);
	 printf("%c\n",'a');
	 printf("%i\n",565);
	//int a = ft_printf("%%%%%%%");
	//printf("\n");
	//int b = printf("%%%%%%%");
	//printf("\n%d-----%d",a,b);
//
	//printf("\n");
	//printf("\n%d///%d", a,b);
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

    return 0;

}
