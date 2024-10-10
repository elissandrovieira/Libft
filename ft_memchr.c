/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:51:00 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/10 12:45:22 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	int				i;

	if (c == 0 && n == 0)
		return (0);
	str = (unsigned char *) s;
	chr = (unsigned char) c;
	i = 0;
	while (n--)
	{
		if (str[i] == chr)
			return (str + i);
		i++;
	}
	return (NULL);
}
