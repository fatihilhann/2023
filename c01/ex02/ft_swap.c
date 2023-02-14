/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: failhan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:50:08 by failhan           #+#    #+#             */
/*   Updated: 2023/02/12 12:54:13 by failhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return (temp);
}