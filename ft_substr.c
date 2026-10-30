/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:48:55 by omejri            #+#    #+#             */
/*   Updated: 2026/10/30 08:12:04 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*array;
	int		i;

	len_s = ft_strlen(s);
	if (!s)
		return (ft_strdup(""));
	if (start + len > len_s)
		if (start < len_s)
			len = len_s - start;
		else
			return (ft_strdup(""));
	array = malloc(len + 1);
	if (!array)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		array[i] = s[start];
		start++;
		i++;
		len--;
	}
	array[i] = '\0';
	return (array);
}
