/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:24:58 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/08 21:57:03 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*to_free;

	if (!lst || !del)
		return ;
	lst = NULL;
	while (node->next != 0)
	{
		del(node->content);
		to_free = node;
		node = node->next;
		free(to_free);
	}
}
