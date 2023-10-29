/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_linked_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:13:58 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/27 12:25:20 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"
#include "libft.h"

static void teste1(t_list	*f(void *))
{
    char str1[5] = "abcd";

	f(str1);
	t_list *retorno = f(str1);
	printf("%s", (char*)retorno->content);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste2(t_list	*f(void *))
{
    char nb[4] = "012";

	f(nb);
	t_list *retorno = f(nb);
	printf("%s", (char *)retorno->content);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_lstnew(t_list	*f(void *))
{
    teste1(f);
	teste2(f);
}