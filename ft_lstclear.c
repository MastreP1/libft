/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:26:48 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 17:25:37 by omejri           ###   ########.fr       */
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
}
