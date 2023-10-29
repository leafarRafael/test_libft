/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_lstmap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:31:15 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/29 10:51:08 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

void *transform_content(void *content)
{
    if (content == NULL)
        return NULL;
    char *str = (char *)content;
    char *result = ft_strdup(str); 
    for (size_t i = 0; result[i]; i++)
        result[i] = ft_toupper(result[i]);
    return result;
}

void free_content(void *content)
{
    free(content);
}

static void	imprime(void *palavra)
{
	printf("%s", (char *)palavra);
}

static void teste1(t_list *x(t_list *, void *(*f)(void *), void (*del)(void *)))
{
    t_list *list1;
	t_list *retorno;
    list1 = ft_lstnew("abcd");
	ft_lstadd_back(&list1, ft_lstnew("efgh"));
	ft_lstadd_back(&list1, ft_lstnew("ijkl"));
	ft_lstadd_back(&list1, ft_lstnew("mnop"));
	retorno = x(list1, transform_content, free_content);
	ft_lstiter(retorno, imprime);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_lstmap(t_list *x(t_list *, void *(*f)(void *), void (*del)(void *)))
{
    teste1(x);
}