/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_strlcat.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:07:05 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/22 12:36:45 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(size_t f(char *, const char *, size_t))
{
    char src[7] = "456789";
    char dest[10] = "0123";
    size_t retorno_f;
    size_t i = 10;
    retorno_f = f(dest, src, 10);
    if (retorno_f == i)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste02(size_t f(char *, const char *, size_t))
{
    char src[32] = "thx to ntoniolo for this test !";
    char dest[4] = "";
    size_t retorno_f;
    retorno_f = f(dest, src, 4);
    if (retorno_f == sizeof(src)-1)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste03(size_t f(char *, const char *, size_t))
{
    char *src = "lorem ipsum dolor sit amet";
    char dest[10] = "a";
    size_t retorno_f;
    retorno_f = f(dest, src , 1);
    if (retorno_f == 27)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste04(size_t f(char *, const char *, size_t))
{
    char *src = "lorem ipsum dolor sit amet";
    char dest[10] = "a";
    size_t retorno_f;
    retorno_f = f(dest, src , 5);
    if (retorno_f == 27)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste05(size_t f(char *, const char *, size_t))
{
    char src[12] = "pqrstuvwxyz";
    char dest[5] = "abcd";
    size_t retorno_f;
    retorno_f = f(dest, src, 1);
    if (retorno_f)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void    teste_ft_strlcat(size_t f(char *, const char *, size_t))
{
    teste01(f);
    teste02(f);
    teste03(f);
    teste04(f);
    teste05(f);
}