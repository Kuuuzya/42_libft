/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:12:45 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/17 17:22:20 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*output;

	output = NULL;
	while (*s)
	{
		if (*s == c)
			output = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (output);
}
