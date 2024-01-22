/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:57:33 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/22 18:22:39 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char restrict *dst, const char restrict *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] && i < size)
		i++;
	while (source[j])
		j++;
	if (size <= i)
		j += size;
	else
		j += i;
	while (source[k] && i + 1 < size)
		dest[i++] = source[k++];
	dest[i] = '\0';
	return (j);
}
