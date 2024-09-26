/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:08:55 by eteofilo          #+#    #+#             */
/*   Updated: 2024/09/26 00:20:22 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int     main(void)
{
        char    buffer[] = "aabbcc";
	char	buff[10] = "Hello ";
	char	buff1[10] = "Hello ";

        memmove(buffer + 2, buffer, 4);
        printf("memmove: %s\n", buffer);
        strcpy(buffer, "aabbcc");
        ft_memmove(buffer + 2, buffer, 4);
        printf("ft_memmove: %s\n", buffer);
	printf("\n------------------------------------------\n");
	printf("size = %ld\n", strlcat(buff, ",world", 5));
	printf("%s", buff);
	printf("size = %ld\n", ft_strlcat(buff1, ",world", 5));
        printf("%s", buff1);

        return (0);
}

