/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:39:25 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/20 17:48:49 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(char *f(const char *))
{
    char src[11] = "COPIA AQUI";
    char *dest;
    dest = f(src);
    if (ft_memcmp(src, dest, 10) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void    teste_ft_strdup(char *f(const char *))
{
    teste01(f);
}