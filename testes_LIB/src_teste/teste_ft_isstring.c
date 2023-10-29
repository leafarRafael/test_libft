/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_isstring.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:40:26 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/15 10:59:34 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void test01(size_t (*f)(const char*), size_t (*x)(const char*))
{
    char test01[11] = "0123456789";
    char test02[28] = "abcdefghijklmnopqrctuvxwyz";
    char test03[28] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";

    if (f(test01) - x(test01) != 0)
        printf("  \x1b[31m[ko]\x1b[0m  ");
    else if (f(test02) - x(test02) != 0)
        printf("  \x1b[31m[ko]\x1b[0m  ");
    else if (f(test03) - x(test03) != 0)
        printf("  \x1b[31m[ko]\x1b[0m  ");
    else    
        printf("  \x1b[32m[ok]\x1b[0m  ");
}

void    ft_test_is_string(size_t (*f)(const char*), size_t (*x)(const char*))
{
    test01(f, x);

}