/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:55:12 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/13 14:03:04 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char a) {
    write( 1, &a, 1);
}
void     rush(int x, int y) {
    int     xindx;
    int     yindx;
    xindx = 1;
    yindx = 2;
    while (xindx <= x) {
        if (xindx == 1 || xindx == x) {
            ft_putchar('o');
        } else {
            ft_putchar('-');
            }
        xindx++;
        }
    xindx = 2;
    ft_putchar('\n');
    while (yindx < y)
    {
        ft_putchar('|');
        while (xindx < x)
        {
            ft_putchar(' ');
            xindx++;
        }
        xindx = 2;
        ft_putchar('|');
        ft_putchar('\n');
        yindx++;
    }
    xindx = 1;
    while (xindx <= x)
    {
        if (y == 1) {
            xindx = x;
        }
        else if (xindx == 1 || xindx == x) {
            ft_putchar('o');
                
        } else {
            ft_putchar('-');
        }
        xindx++;
    }
    ft_putchar('\n');
}
int     main(void)
{
    rush(5,5);
    return 0;
}
