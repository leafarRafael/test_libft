/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_to_lower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:32:26 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/18 08:26:59 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "function_teste.h"

static void teste01(int f(int))
{
    char    texto[60] = "TeXtO eM mAiUsCuLo Ou MiNuScUlO + - 0 2 34 ? ! ' ' ";
    int i;
    int is_u;

    i = 0;
    while (texto[i] != '\0')
    {
        texto[i] = f(texto[i]);
        i++;
    }
    i = 0;
    is_u = 0;
    while (texto[i] != '\0')
    {
        if (ft_lower(texto[i]))
        {
            is_u ++;
            break ;
        }
        i++;
    }
    if (is_u != 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void    teste_ft_lower(int f(int))
{
    teste01(f);
}