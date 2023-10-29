/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_memcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:00:39 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/15 17:37:02 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

void teste01(void *f(void *, const void *, size_t))
{
    char src[60] = "DESTINO \0MENOR QUE SRC";
    char dest[20];
    f(dest, src, 20);
    if (ft_memcmp(src, dest, 21) != 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste02(void *f(void *, const void *, size_t))
{
    char src[60] = "\0 \0 \0 \0 \0 \0 \0 \0 \0 ";
    char dest[20] ="";
    f(dest, src, 7);
    if (ft_memcmp(src, dest, 7) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste03(void *f(void *, const void *, size_t))
{
    char src[17] = "\0 \a \b \t \n \v \f \r ";
    char dest[17];
    f(dest, src, 17);
    if (ft_memcmp(src, dest, 17) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void    teste_memcpy(void *f(void *, const void *, size_t))
{
    teste01(f);
    teste02(f);
    teste03(f);
}