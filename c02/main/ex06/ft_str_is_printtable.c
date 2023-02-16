/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printtable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: failhan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:06:21 by failhan           #+#    #+#             */
/*   Updated: 2023/02/14 18:06:43 by failhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int    main()
{
    printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%"));
    printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
