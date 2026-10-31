/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:45:28 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 11:52:48 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

/*#include "stdio.h"
#include <stdlib.h>


static size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_strdup(const char *str)
{
	int		i;
	char	*array;

	i = 0;
	array = malloc(ft_strlen(str));
	while (str[i])
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (new_str(s1, i, j - (i - 1)));
}
*/

/*#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

int	main(void){
void * a = malloc(34359738368);
printf("%p\n",a);
free(a);
}*/

/*void	*ft_memset(void *dest, const int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		((unsigned char *)dest)[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (dest);
}
void	*ft_bzero(void *dest, int c)
{
	if(!dest || !c)
		return(malloc(0));
	return(ft_memset(dest, 0, c));
}


void	*ft_calloc(size_t number, size_t size)
{
	void	*array;
	int		total;

	if(!number || !size)
		return (malloc(0));
	total  = size * number;
	if(size != 0 && total / size == number)
	{
		array = malloc(number * size);
		ft_bzero(array, number * size);
	}else
		return (malloc(0));
	return (array);
}
int	main(void)
{
	int				*a;
void			*content;
struct s_list	*next;
	unsigned int	i;
	t_list			*current;

	a = ft_calloc(15713957981351,31957198357135);
	*a  = 4;
	printf("%d\n",*a);
	return(0);
}*/
/*typedef struct s_list
{
}				t_list;
unsigned int	ft_lstsize(t_list *lst)
{
	i = 0;
	current = lst;
	while(current != NULL)
	{
		current = current->next;
		i++;
	}
	return(i);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*follow;

	current = *lst;
	while(current != NULL)
	{
		follow = current->next;
		del(current->content);
		free(current);
		current = follow;
	}
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if(!content)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	del(void *content)
{
	free(content);
}

char	*str_tolower_inplace(char *str)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*array;

	i = 0;
	array = malloc(ft_strlen(str));
	while (str[i])
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}



t_list	*ft_lstmap(t_list *lst, char *(*f)(char *), void (*del)(void *))
{
	t_list			*current;
	t_list			*head;
	unsigned int	i;

	current = lst;
	head = NULL;
	t_list * new;
	i = ft_lstsize(lst) - 1;
	new = ft_lstnew(f(ft_strdup(current->content)));
	if(!new)
		return(NULL);
	head = new;
	while( i > 0)
	{
		new->next = ft_lstnew(f(ft_strdup(current->next->content)));
		if(!new->next){
			ft_lstclear(&head,del);
			break ;
		}
		new = new->next;
		current  = current->next;
		i--;
	}
	ft_lstclear(&lst,del);
	return(head);
}

int	main(void)
{
	t_list *head = ft_lstnew(ft_strdup("C"));
	t_list *s1 = ft_lstnew(ft_strdup("B"));
	t_list *s2 = ft_lstnew(ft_strdup("A"));
	head->next = s1;
	s1->next = s2;
	t_list *new = ft_lstmap(head,str_tolower_inplace,del);
	while(new != NULL)
	{
		printf("%s\n",new->content);
		new = new->next;
	}
}*/