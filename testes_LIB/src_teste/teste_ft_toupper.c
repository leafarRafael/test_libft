/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_toupper.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:28:05 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/16 16:32:43 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void teste01(int f(int))
{
	char    texto[19] = "TeXtO eM mAiUsCuLo";
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
		if (!ft_isupper(texto[i]))
		{
			is_u++;
			break ;
		}
		i++;
	}
	if (is_u != 0)
	{
		printf("  \x1b[32m[ok]\x1b[0m  ");
	}
	else
	{
		printf("  \x1b[31m[ko]\x1b[0m  ");
	}
}

void    teste_ft_toupper(int f(int))
{
	teste01(f);
}