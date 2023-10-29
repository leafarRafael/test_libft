/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:41:00 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/13 19:09:33 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"


static void teste1(int f(const char *))
{
    char str[50] = " \a\b\t\n\v\f\r 1234";
    int retorno_esperado = 0;
    int retorno;
    retorno = f(str);
    if (retorno == retorno_esperado)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste2(int f(const char *))
{
    char str[50] = "  \t\n\v\f\r 1234";
    int retorno_esperado = 1234;
    int retorno;
    retorno = f(str);
    if (retorno == retorno_esperado)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste3(int f(const char *))
{
    char str[50] = "  \t\n\v\f\r 1234ABCD1234";
    int retorno_esperado = 1234;
    int retorno;
    retorno = f(str);
    if (retorno == retorno_esperado)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste4(int f(const char *))
{
    char str[50] = "  \t\n\v\f\r +1234ABCD1234";
    int retorno_esperado = 1234;
    int retorno;
    retorno = f(str);
    if (retorno == retorno_esperado)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste5(int f(const char *))
{
    char str[50] = "  \t\n\v\f\r -1234ABCD1234";
    int retorno_esperado = -1234;
    int retorno;
    retorno = f(str);
    if (retorno == retorno_esperado)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste6(int f(const char *))
{
    char str[50] = "  \t\n\v\f\r - -1234ABCD1234";
    int retorno_esperado = 0;
    int retorno;
    retorno = f(str);
    if (retorno == retorno_esperado)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste7(int f(const char *))
{
    char str[50] = "  \t\n\v\f\r --1234ABCD1234";
    int retorno_esperado = 0;
    int retorno;
    retorno = f(str);
    if (retorno == retorno_esperado)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_atoi(int f(const char *))
{
    teste1(f);
    teste2(f);
    teste3(f);
    teste4(f);
    teste5(f);
    teste6(f);
    teste7(f);
}