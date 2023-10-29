/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_isascii.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:32:03 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/27 09:08:23 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(int (*f)(int), int (*x)(int))
{
    int j;
    int b;
    char character;
    int return_f;
    int return_x;
    int is_ok;

    is_ok = 0;
    j = 0;
    b = 0;
    character = 0;
    while (j < 130)
    {
        return_f = f(character);
        return_x = x(character);
        if (((return_f > 0 && return_x > 0)) || ((return_f < 0 && return_x < 0)) || ((return_f == 0 && return_x == 0)))
            is_ok = 0;
        else
        {
            is_ok = 1;
            break;
        }
        j++;
        character++;
    }
    if (is_ok == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");

}

void     teste_ascii(int (*f)(int), int (*x)(int))
{
    teste01(f, x);
}