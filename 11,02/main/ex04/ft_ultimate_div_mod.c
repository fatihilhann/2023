/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: failhan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:16:46 by failhan           #+#    #+#             */
/*   Updated: 2023/02/11 12:17:11 by failhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void    ft_ultimate_div_mod(int    *a, int *b)
{
    int    div;
    int    mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int    main    (void)
{
    int x;
    int y;
    
    x = 15;
    y = 3;
    ft_ultimate_div_mod(&x, &y);
    printf("%d | %d", x, y);
}
