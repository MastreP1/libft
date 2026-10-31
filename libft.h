/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 08:11:44 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 17:53:26 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *text);
void				*ft_bzero(void *dest, int c);
void				*ft_calloc(size_t number, size_t size);
int					ft_isalnum(int str);
int					ft_isalpha(int str);
int					ft_isascii(int str);
int					ft_isdigit(int str);
int					ft_isprint(int str);
void				*ft_memchr(void *b, int c, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *dest, const int c, size_t len);
char				*ft_strchr(char *s, int c);
char				*ft_strdup(const char *str);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strlcat(char *src, char *dest, int size);
int					ft_strlcpy(char *src, char *dest, size_t buffer);
size_t				ft_strlen(const char *str);
int					ft_strncmp(char *s1, char *s2, int n);
char				*ft_strnstr(char *big, char *little, int len);
char				*ft_strrchr(char *s, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
unsigned char		ft_tolower(int c);
unsigned char		ft_toupper(int c);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
unsigned int		ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);

#endif