/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:54:11 by skuznets          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/17 17:28:38 by skuznets         ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Updated: 2024/01/16 15:41:20 by skuznets         ###   ########.fr       */
=======
/*   Updated: 2024/01/17 17:16:46 by skuznets         ###   ########.fr       */
>>>>>>> 9b879e27fa56ddf045cd3c37a5a5a698733b94fb
>>>>>>> 25512b9b5ddb42f07d62ab5b0aa219ecd7325172
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

char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);

#endif