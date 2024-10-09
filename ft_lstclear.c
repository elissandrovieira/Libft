/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:24:58 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/09 13:38:01 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*to_free;

	node = *lst;
	if (!lst || !del)
		return ;
	while (node)
	{
		to_free = node->next;
		del(node->content);
		free(node);
		node = to_free;
	}
	*lst = 0;
}
