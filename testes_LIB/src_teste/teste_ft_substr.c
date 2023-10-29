/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_substr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:37:42 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/22 12:36:23 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(char *f(const char *, unsigned int, size_t))
{
    char src[11] = "0123456789";
    char *dest;
    unsigned int i = 2;
	size_t	size = 4;

    dest = f(src, i, size);
    if (ft_memcmp(dest, &src[i], size) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste02(char *f(const char *, unsigned int, size_t))
{
    char src[20] = "0123456789ABCDEFGHIJ";
    char *dest;
    unsigned int i = 200;
	size_t	size = 0;

    dest = f(src, i, size);
    if (ft_memcmp(dest, &src[i], size) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}


static void teste03(char *f(const char *, unsigned int, size_t))
{
    char src[20] = "01234";
    char *dest;
    unsigned int i = 10;
	size_t	size = 10;

    dest = f(src, i, size);
    if (ft_memcmp(dest, &src[i], size) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste04(char *f(const char *, unsigned int, size_t))
{
    char src[20] = "";
    char *dest;
    unsigned int i = 1;
	size_t	size = 1;

    dest = f(src, i, size);
    if (ft_memcmp(dest, &src[i], size) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}
void    teste_ft_substr(char *f(const char *, unsigned int, size_t))
{
    teste01(f);
	teste02(f);
	teste03(f);
	teste04(f);
}