/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:44:03 by omejri            #+#    #+#             */
/*   Updated: 2026/10/30 08:11:27 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, int len)
{
	int i = 0;
	int j = 0;
	int mark = 0;
	while (big[i])
	{
		if (big[i] == little[j])
		{
			mark = i;
			while (big[i] == little[j])
			{
				i++;
				j++;
			}
			if (little[j] == '\0')
			{
				return (&big[mark]);
			}
			j = 0;
		}
		i++;
	}
}
