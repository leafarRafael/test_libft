/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:03:40 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/15 11:48:51 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(void f(void *, size_t))
{
    char test01[22] = "ABCDEFGHIJ";
    int x;
    
    f(test01, 22);
    if (ft_valid_inside_array(test01, 22) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste02(void f(void *, size_t))
{
    char test01[22] = "ABCDEFGHIJ";
    int x;
    
    f(test01, 4);
    if (ft_valid_inside_array(test01, 22) != 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_bzero(void f(void *, size_t))
{
    teste01(f);
    teste02(f);
}