/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_memset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:35:46 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/15 14:43:21 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(void *f(void *, int, size_t))
{
    int l = 11;
    char str1[11] = "0123456789";
    int return_cmp;

    f(str1, 'A', 11);
    return_cmp = ft_memcmp(str1, str1, sizeof(str1));
    if (return_cmp == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste02(void *f(void *, int, size_t))
{
    int l = 11;
    char str1[11] = "0123456789";
    int return_cmp;

    f(str1, 'A', 11);
    return_cmp = ft_valid_inside_array(str1, 11);
    if (return_cmp != 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void teste03(void *f(void *, int, size_t))
{
    int l = 11;
    char str1[11] = "0123456789";
    int return_cmp;

    f(str1, 0, 11);
    return_cmp = ft_valid_inside_array(str1, 11);
    if (return_cmp == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

void    teste_memSet(void *f(void *, int, size_t))
{
    teste01(f);
    teste02(f);
    teste03(f);

}