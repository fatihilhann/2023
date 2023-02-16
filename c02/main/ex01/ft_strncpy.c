/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: failhan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:44:21 by failhan           #+#    #+#             */
/*   Updated: 2023/02/14 15:56:49 by failhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int    main()
{
    char src[] = "Hello";
    char dest[] = "World1";
    char dest1[] = "World2";

    printf("%s", ft_strncpy(dest, src, 3));
    printf("\n%s", strncpy(dest1, src, 3));
    printf("\n%s", ft_strncpy(dest, src, 5));
    printf("\n%s", strncpy(dest1, src, 5));
    printf("\n%s", ft_strncpy(dest, src, 7));
    printf("\n%s", strncpy(dest1, src, 7));
}
