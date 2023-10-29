/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_strrchr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:02:59 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/20 10:18:16 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void test01(char *f(const char*, int))
{
    const char texto[20] = "procure E no texto";
    const char *retorno;
    char expected_return[11] = "E no texto";
    char letra = 'E';

    retorno = f(texto, letra);
    if (ft_memcmp(expected_return, retorno, 5) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_strrchr(char *f(const char*, int))
{
    test01(f);
}