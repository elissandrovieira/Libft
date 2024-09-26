/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:22:43 by eteofilo          #+#    #+#             */
/*   Updated: 2024/09/26 17:52:33 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*b1;
	char	*b2;
	size_t	i;

	b1 = (char *)s1;
	b2 = (char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && b1[i] == b2[i] && b1[i] != 0)
		i++;
	return (b1[i] - b2[i]);
}
