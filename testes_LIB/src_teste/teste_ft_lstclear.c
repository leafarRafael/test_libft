/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_lstclear.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:27:32 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/29 09:55:58 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void	del(void *palavra)
{
	palavra = 0;
}

static void teste1(void f(t_list **, void (*)(void *)))
{
    char str1[5] = "abcd";
	char str2[5] = "efgh";


    t_list *list1;
    list1 = ft_lstnew("abcd");
	ft_lstadd_back(&list1, ft_lstnew("efgh"));
	
	while(list1->next != NULL)
	{
		printf("%s, ", (char *)list1->content);
		list1 = list1->next;
	}
	printf("%s\n", (char *)list1->content);
	f(&list1, &del);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_lstclear(void f(t_list **, void (*)(void *)))
{
    teste1(f);
}

