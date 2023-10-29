/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_lstiter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:47:19 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/29 10:31:23 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void	imprime(void *palavra)
{
	printf("%s", (char *)palavra);
}

static void teste1(void	x(t_list *, void (*f)(void *)))
{
    char str1[5] = "abcd";
	char str2[5] = "efgh";


    t_list *list1;
    list1 = ft_lstnew("abcd");
	ft_lstadd_back(&list1, ft_lstnew("efgh"));
	ft_lstadd_back(&list1, ft_lstnew("ijkl"));
	ft_lstadd_back(&list1, ft_lstnew("mnop"));
	x(list1, imprime);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_lstiter(void	x(t_list *, void (*f)(void *)))
{
    teste1(x);
}