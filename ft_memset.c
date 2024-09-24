/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:28:08 by eteofilo          #+#    #+#             */
/*   Updated: 2024/09/24 16:37:40 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned long int n)
{
	char	*s1;
	char	*end;

	s1 = (char *)s;
	end = s1 + n;
	while (s1 != end)
	{
		*s1 = c;
		s1++;
	}
	return (s);
}
