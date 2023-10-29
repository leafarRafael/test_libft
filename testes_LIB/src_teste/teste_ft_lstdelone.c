/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_lstdelone.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:17:32 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/29 11:56:45 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

void	deleta(void *palavra)
{
	int i;
	char *t;

	t = (char *) palavra;
	i = 0;
	while(t[i] != '\0')
	{
		t[i] = 0;
		i++;
	}
}

static void teste1(void f(t_list *, void (*)(void *)))
{
    char str1[5] = "abcd";

    t_list *list1;
    list1 = ft_lstnew(str1);
	printf("\n");
    printf("%s\n", (char *)list1->content);
	f(list1, &deleta);
	printf("%s\n", (char *)list1->content);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_lstdelone(void f(t_list *, void (*)(void *)))
{
    teste1(f);
}

