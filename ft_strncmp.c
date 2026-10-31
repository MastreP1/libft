/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:43:54 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 16:21:32 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;
	int	diff;

	if (!s1 || !s2)
		return (0);
	i = 0;
	diff = 0;
	while (s1[i] && s2[i] && n > 0)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break ;
		}
		i++;
		n--;
	}
	return (diff);
}
