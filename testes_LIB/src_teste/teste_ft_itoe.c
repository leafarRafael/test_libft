/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_itoe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:38:45 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/27 08:28:38 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste1(char *f(int))
{
    int int_itoa = 123456;
    char	*retorno_esperado = "123456";
    char	*retorno;
    retorno = f(int_itoa);
    if (ft_memcmp(retorno_esperado, retorno, 5) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste2(char *f(int))
{
    int int_itoa = 0;
    char	*retorno_esperado = "0";
    char	*retorno;
    retorno = f(int_itoa);
    if (ft_memcmp(retorno_esperado, retorno, 2) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste3(char *f(int))
{
    int int_itoa = -123456;
    char	*retorno_esperado = "-123456";
    char	*retorno;
    retorno = f(int_itoa);
    if (ft_memcmp(retorno_esperado, retorno, 2) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste4(char *f(int))
{
    int int_itoa = -999999;
    char	*retorno_esperado = "-999999";
    char	*retorno;
    retorno = f(int_itoa);
    if (ft_memcmp(retorno_esperado, retorno, 2) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste5(char *f(int))
{
    int int_itoa = -2147483648;
    char	*retorno_esperado = "-2147483648";
    char	*retorno;
    retorno = f(int_itoa);
    if (ft_memcmp(retorno_esperado, retorno, 2) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste6(char *f(int))
{
    int int_itoa = 2147483647;
    char	*retorno_esperado = "2147483647";
    char	*retorno;
    retorno = f(int_itoa);
    if (ft_memcmp(retorno_esperado, retorno, 2) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste7(char *f(int))
{
    int int_itoa = -10;
    char	*retorno_esperado = "-10";
    char	*retorno;
    retorno = f(int_itoa);
    if (ft_memcmp(retorno_esperado, retorno, 2) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_itoa(char *f(int))
{
    teste1(f);
	teste2(f);
	teste3(f);
	teste4(f);
	teste5(f);
	teste6(f);
	teste7(f);
}