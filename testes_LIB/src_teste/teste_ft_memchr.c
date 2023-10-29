/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_memchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:25:50 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/18 09:49:54 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void test01(void *f(const void *, int, size_t))
{
    const char src[20] = "procure E no texto";
    const char src_return[11] = "E no texto";
    const char *retorno;
    int  c = 'E';
    size_t size = 10;

    retorno = f(src, c, size);
    if (ft_memcmp(retorno, src_return, 10) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test02(void *f(const void *, int, size_t))
{
    const char src[20] = "procure E no texto";
    const char src_return[11] = "";
    const char *retorno;
    int  c = '0';
    size_t size = 10;

    retorno = f(src, c, size);
    printf("%s", retorno);
    if (strcmp(retorno, src_return) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test03(void *f(const void *, int, size_t))
{
    const char src[20] = "procure E no texto";
    const char src_return[11] = "E no texto";
    const char *retorno;
    int  c = 'E';
    size_t size = 0;

    retorno = f(src, c, size);
    if (!retorno)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_memchr(void *f(const void *, int, size_t))
{
    test01(f);
    //test02(f);
    test03(f);
}