/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:25:08 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/17 17:53:37 by skuznets         ###   ########.fr       */
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

#include <stdio.h>
int main(void)
{
	char *s;
	printf("%zu\n", ft_strlen(s));
}