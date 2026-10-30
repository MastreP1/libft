/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:40:51 by omejri            #+#    #+#             */
/*   Updated: 2026/10/30 08:11:45 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t s_len = ft_strlen(s1);
	int i = 0;
	int j = 0;
	int found = 0;
	int mark = 0;
	int mark1 = 0;
	while (s1[i])
	{
		found = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				mark = i;
				found = 1;
			}
			j++;
		}
		if (!found)
		{
			break ;
		}
		i++;
	}
	i = s_len - 1;
	j = 0;
	while (s1[i])
	{
		found = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				mark1 = i;
				found = 1;
			}
			j++;
		}
		if (!found)
		{
			break ;
		}
		i++;
	}

	char *array = malloc(mark1 - mark);
	if (!array)
		return (ft_strdup(""));
	i = mark;
	j = 0;
	while (i <= mark1 && s1[i])
	{
		array[j] = s1[i];
		i++;
		j++;
	}
	return (array);
}