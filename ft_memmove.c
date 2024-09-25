/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:28:08 by eteofilo          #+#    #+#             */
/*   Updated: 2024/09/25 16:43:01 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	int	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d <= s || d >= (s + n))
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		
		while (n--)
		{
			*(d + n) = *(s + n);
		}
	}
	return (dest);
}
