/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:08:55 by eteofilo          #+#    #+#             */
/*   Updated: 2024/09/25 18:51:28 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int     main(void)
{
        char    buffer[] = "aabbcc";

        memmove(buffer + 2, buffer, 4);
        printf("memmove: %s\n", buffer);
        strcpy(buffer, "aabbcc");
        ft_memmove(buffer + 2, buffer, 4);
        printf("ft_memmove: %s\n", buffer);
        return (0);
}

