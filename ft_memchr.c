/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:51:00 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/02 13:27:05 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;

	if (c == 0 && n == 0)
		return (0);
	str = (unsigned char *)s;
	chr = (unsigned	char)c;
	while (*str != chr && n--)
		str++;
	if (*str == chr)
		return ((void *)str);
	return (0);
}