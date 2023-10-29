/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_strlcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:38:58 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/16 12:35:33 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(size_t f(char *, const char *, size_t))
{
    char src[11] = "0123456789";
    char dest[11];
    size_t i;

    i = f(dest, src, 4);
    if (ft_memcmp(dest, src, 3) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void    teste_ft_strlcpy(size_t f(char *, const char *, size_t))
{
    teste01(f);
}