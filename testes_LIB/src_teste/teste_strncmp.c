/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:39:45 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/20 08:53:27 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void test01(int f(const char*, const char*, size_t))
{
    int     x;
    int     expected_return;
    char    s1[20] = "012345689";
    char    s2[20] = "0123456789";
    
    x = f(s1, s2, 5);
    expected_return = 0;
    if (x == expected_return)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test02(int f(const char*, const char*, size_t))
{
    int     x;
    int     expected_return;
    char    s1[20] = "022345689";
    char    s2[20] = "0123456789";
    
    x = f(s1, s2, 5);
    expected_return = 0;
    if (x > expected_return)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}


static void test03(int f(const char*, const char*, size_t))
{
    int     x;
    int     expected_return;
    char    s1[20] = "012345689";
    char    s2[20] = "23456789";
    
    x = f(s1, s2, 5);
    expected_return = 0;
    if (x < expected_return)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_strncmp(int f(const char*, const char*, size_t))
{
    test01(f);
    test02(f);
    test03(f);
}