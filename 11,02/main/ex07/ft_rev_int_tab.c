 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: failhan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:24:58 by failhan           #+#    #+#             */
/*   Updated: 2023/02/11 13:26:23 by failhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	new;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		new = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = new;
		i++;
	}
}

int    main()
{
    int tab[6] = {0, 1, 2, 3, 4, 5};
    int size = 6;

    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return (0);
}
