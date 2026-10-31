/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:55:59 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:59:38 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*array;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
	{
		i++;
	}
	array = malloc((i + 1) * sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i])
	{
		array[i] = f(i, s[i]);
		i++;
	}
	return (array);
}
