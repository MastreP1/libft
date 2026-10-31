/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:20:13 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:03:42 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*array;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	if (i == 0)
		array = malloc(1);
	else
		array = malloc(i);
	if (!array)
		return (NULL);
	while (str[i])
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
