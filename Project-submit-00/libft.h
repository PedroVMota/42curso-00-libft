/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test <test@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:45:49 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/05 20:39:53 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t count, size_t size);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalpha(char c);
int					ft_isascii(int c);
int					ft_isdigit(char a);
int					ft_isprint(int arg);
char				*ft_itoa(int n);
void				*ft_memcpy(void *restrict dst, const void *restrict src,
						size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(char *str);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
int					ft_strlen(char *str);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				ft_tolower(char c);
char				ft_toupper(char c);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
#endif