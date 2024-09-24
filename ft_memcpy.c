/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:28:08 by eteofilo          #+#    #+#             */
/*   Updated: 2024/09/24 18:50:51 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned long int n)
{
	char	*s;
	char	*d;
	char	*end;

	s = (char *)src;
	d = (char *)dest;
	end = s + n;
	while (s != end)
	{
		*d++ = *s++;
	}
	return (dest);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buffer[] = "ABCDEFGHIJ";

	ft_memcpy(buffer + 2, buffer, 5);
	printf("Resultado com memcpy: %s\n", buffer);
	strcpy(buffer, "ABCDEFGHIJ");
	memmove(buffer + 2, buffer, 5);
	printf("Resultado com memmove: %s\n", buffer);
    	return (0);
}

