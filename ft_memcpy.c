/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:46:31 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/16 09:47:06 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *destination, const void *source, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char *)destination;
	src = (char *)source;
	while (n--)
		*dest++ = *src++;
	return (destination);
}
