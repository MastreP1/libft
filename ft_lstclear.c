/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:26:48 by omejri            #+#    #+#             */
/*   Updated: 2026/11/01 15:05:29 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*follow;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		follow = current->next;
		del(current->content);
		free(current);
		current = follow;
	}
	*lst = NULL;
}
