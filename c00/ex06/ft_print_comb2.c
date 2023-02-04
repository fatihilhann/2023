/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: failhan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:11:17 by failhan           #+#    #+#             */
/*   Updated: 2023/02/04 14:11:22 by failhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_pirnt_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (48 + a / 10);
			ft_putchar (48 + a % 10);
			ft_putchar (' ');
			ft_putchar (48 + b / 10);
			ft_putchar (48 + b % 10);
			if (a != 98)
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
