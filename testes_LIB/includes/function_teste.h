/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_teste.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:46:33 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/04 12:45:35 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_TESTE_H
#define FUNCTION_TESTE_H

#include "/nfs/homes/rbutzke/projetolibft/libft/libft.h"
# include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <string.h>
#include <bsd/string.h>

void    teste_ascii(int (*f)(int), int (*x)(int));
void    teste_ft_lower(int f(int));
void    teste_ft_toupper(int f(int));
void    ft_test_is_string(size_t (*f)(const char*), size_t (*x)(const char*));
void    teste_memSet(void *f(void *, int, size_t));
void    teste_bzero(void f(void *, size_t));
void    teste_memcpy(void *f(void *, const void *, size_t));
void    teste_memmove(void *f(void *, const void *, size_t));
void    teste_ft_strlcpy(size_t f(char *, const char *, size_t));
void    teste_ft_strlcat(size_t f(char *, const char *, size_t));
void 	teste_ft_strchr(char *f(const char*, int));
void 	teste_ft_strrchr(char *f(const char*, int));
void 	teste_ft_strncmp(int f(const char*, const char*, size_t));
void 	teste_ft_memchr(void *f(const void *, int, size_t));
void 	teste_ft_memcmp(int f(const void*, const void*, size_t));
void    teste_ft_strnstr(char *f(const char *, const char *, size_t));
void 	teste_ft_atoi(int f(const char *));
void 	ft_print_array_size(char *c, int size);
int 	ft_valid_inside_array(char *c, int size);
int		ft_isupper(char c);
int		ft_lower(char c);
void    teste_ft_strdup(char *f(const char *));
void    teste_ft_substr(char *f(const char *, unsigned int, size_t));
void    teste_ft_strtrim(char *f(const char *, const char *));
void 	ft_putnbr_fd(int n, int fd);
void 	teste_ft_itoa(char *f(int));
void    teste_ft_split(char **f(char const *, char));
void	teste_ft_lstnew(t_list	*f(void *));
void	teste_ft_lstadd_front(void f(t_list **, t_list *));
void	teste_ft_lstadd_back(void f(t_list **, t_list *));
void	teste_ft_lstsize(int f(t_list *));
void	teste_ft_lstlast(t_list *f(t_list *));
void	teste_ft_lstdelone(void f(t_list *, void (*)(void *)));
void 	teste_ft_lstclear(void f(t_list **, void (*)(void *)));
void	teste_ft_lstiter(void	x(t_list *, void (*f)(void *)));
void	teste_ft_lstmap(t_list *x(t_list *, void *(*f)(void *), void (*del)(void *)));
void 	teste_ft_striteri(void	x (char *, void (*f)(unsigned int, char*)));


#endif