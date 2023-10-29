/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_strchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:07:04 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/20 10:19:01 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void test01(char *f(const char*, int))
{
    const char texto[20] = "procure E no texto";
    const char *retorno;
    char letra = texto[7];
    retorno = f(texto, letra);
    if (ft_memcmp(&texto[7], retorno, 13) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_strchr(char *f(const char*, int))
{
    test01(f);
}