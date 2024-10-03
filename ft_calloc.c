/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:00:59 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/03 12:37:25 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	n = nmemb * size;
	if (n / nmemb != size)
		return (0);
	ptr = (void *)malloc(n);
	if (!ptr)
		return (0);
	ft_bzero(ptr, n);
	return (ptr);
}
