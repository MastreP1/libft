/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:20:13 by omejri            #+#    #+#             */
/*   Updated: 2026/11/01 15:06:16 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*array;

	len = ft_strlen(str);
	array = malloc(len + 1);
	if (!array)
		return (NULL);
	i = 0;
	while (str[i])
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
