/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:20:13 by omejri            #+#    #+#             */
/*   Updated: 2026/10/27 17:54:10 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int i = 0;
	char *array = malloc(ft_strlen(str));
	while (str[i])
	{
		array[i] = str[i];
		i++;
	}

	array[i] = '\0';
	return (array);
}
