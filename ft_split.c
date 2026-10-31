/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:04:15 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:45:43 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy(char const *s, char c, char **array)
{
	size_t	i;
	size_t	j;
	size_t	position;

	i = 0;
	j = 0;
	position = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			array[position][j] = '\0';
			position++;
			j = 0;
			i++;
		}
		else
		{
			array[position][j] = s[i];
			i++;
			j++;
		}
	}
}

static size_t	word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] && s[i + 1] && s[i + 1] != c)
			j++;
		i++;
	}
	return (j + 1);
}

static void	*allocation(char **a, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	position;

	i = 0;
	j = 0;
	position = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] && s[i - 1] != c)
		{
			a[position] = malloc((j + 1) * sizeof(char));
			j = 0;
			position++;
			i++;
		}
		else if (s[i] == c)
			i++;
		else
		{
			i++;
			j++;
		}
		a[position] = malloc((j + 1) * sizeof(char));
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		position;
	size_t	j;
	char	**array;

	j = word(s, c);
	array = malloc((j + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	position = 0;
	i = 0;
	j = 0;
	allocation(array, s, c);
	copy(s, c, array);
	array[position][j] = '\0';
	array[position + 1] = NULL;
	return (array);
}
