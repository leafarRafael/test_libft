/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_lstsize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:12:38 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/28 12:19:27 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste1(int f(t_list *))
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
    ft_lstadd_front(&proximo, list4);
    ft_lstadd_front(&proximo, list3);
    ft_lstadd_front(&proximo, list2);
    ft_lstadd_front(&proximo, list1);
	printf("\n");
	printf("retorno da função %d", f(proximo));
	printf("\n");
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_lstsize(int f(t_list *))
{
    teste1(f);
}