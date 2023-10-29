/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array_size.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:28:22 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/27 12:42:50 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

void ft_print_array_size(char *c, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%c", c[i]);
        i++;
    }
}