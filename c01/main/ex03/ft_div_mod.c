/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: failhan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:48:52 by failhan           #+#    #+#             */
/*   Updated: 2023/02/11 11:51:46 by failhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

int        main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 5;
    b = 2;
    ft_div_mod(a, b, &div, &mod);
    printf("%d / %d = %d, left %d\n", a, b, div, mod);
}
