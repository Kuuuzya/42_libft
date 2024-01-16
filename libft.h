/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:54:11 by skuznets          #+#    #+#             */
/*   Updated: 2024/01/16 15:41:20 by skuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int 	ft_toupper(int c);
int		ft_tolower(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

#endif