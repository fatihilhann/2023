/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: failhan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:34:13 by failhan           #+#    #+#             */
/*   Updated: 2023/02/11 11:38:08 by failhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
    
    return(temp);
}

int    main()
{
    int    x;
    int    y;
    
    x = 2;
    y = 3;
    ft_swap(&x, &y);
    printf("%d \n", x);
    printf("%d", y);
}
