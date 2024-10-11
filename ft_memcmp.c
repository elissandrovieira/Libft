/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:22:43 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/11 17:27:06 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < (n - 1) && b1[i] == b2[i])
		i++;
	return (b1[i] - b2[i]);
}
