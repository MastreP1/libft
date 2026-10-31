/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:48:55 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 16:50:39 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(unsigned int start, size_t len_s)
{
	if (start < len_s)
		return (len_s - start);
	else
		return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*array;
	int		i;

	if (!s)
		return (ft_strdup(""));
	len_s = ft_strlen(s);
	if (start + len > len_s)
		len = check(start, len_s);
	if (len <= 0)
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
