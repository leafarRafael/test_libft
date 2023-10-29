/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_lstadd_front.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:19:53 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/27 14:36:58 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste1(void	f(t_list **, t_list *))
{
    char str1[5] = "abcd";
    char str2[5] = "efgh";
    char str3[5] = "ijkl";
    char str4[5] = "mnop";

    t_list *proximo;
    proximo = NULL;

    t_list *list1;
    t_list *list2;
    t_list *list3;
    t_list *list4;

    list1 = ft_lstnew(str1);
    list2 = ft_lstnew(str2);
    list3 = ft_lstnew(str3);
    list4 = ft_lstnew(str4);
    f(&proximo, list4);
    f(&proximo, list3);
    f(&proximo, list2);
    f(&proximo, list1);
    printf("\n");
    while (proximo->next != NULL)
    {
        printf("%s\n", (char *)proximo->content);
        proximo = proximo->next;
    }
    printf("%s\n", (char *)proximo->content);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_lstadd_front(void f(t_list **, t_list *))
{
    teste1(f);
}
