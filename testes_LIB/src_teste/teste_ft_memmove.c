/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:45:24 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/11 18:49:21 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(void *f(void *, const void *, size_t))
{
    char src[6] = "01234";
    char dest[5];
    int size = 4;
    f(dest, src, size);
    if (ft_memcmp(src, dest, size) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste02(void *f(void *, const void *, size_t))
{
    char src[16] = "\0 \0 \0 \0 \0 01234";
    char dest[16];
    int size = sizeof(src);
    f(dest, src, size);
    if (ft_memcmp(src, dest, size) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste03(void *f(void *, const void *, size_t))
{
    char src[16] = "\0 \0 \0 \0 \0 01234";
    char dest[16];

    int size = sizeof(src);
    f(dest, src, size);
    if (ft_memcmp(src, dest, size) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste04(void *f(void *, const void *, size_t))
{
    char src[17] = "\0 \a \b \t \n \v \f \r ";
    char dest[17];

    int size = sizeof(src);
    f(dest, src, size);
    if (ft_memcmp(src, dest, size) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste05(void *f(void *, const void *, size_t))
{
    char src[20] = "0123456789ABCDEFGHIJ";
    int i = 10;
    f(&src[i], src, 20);
    if (ft_memcmp(src, src, 19) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void    teste_memmove(void *f(void *, const void *, size_t))
{
    teste01(f);
    teste02(f);
    teste03(f);
    teste04(f);
    teste05(f);
}