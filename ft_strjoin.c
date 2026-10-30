/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:58:55 by omejri            #+#    #+#             */
/*   Updated: 2026/10/30 08:10:03 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i = 0;
	int j = 0;

	char *array = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!array)
	{
		return (0);
	}
	while (s1[i])
	{
		array[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}
