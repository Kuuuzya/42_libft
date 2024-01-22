/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:25:08 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/22 20:18:09 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = len;
	while (i >= 0 && s[i] != (unsigned char)c)
		i--;
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}
