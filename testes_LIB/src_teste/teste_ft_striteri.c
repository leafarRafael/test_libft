/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_striteri.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:30:29 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/04 12:52:30 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "function_teste.h"

static void testes(unsigned int i, char *s)
{
    int j;
    i = 32;
    j = 0;
	while (s[j])
    {
        if (ft_lower(s[j]))
            s[j] -= i;
        j++;
    }
}

static void test01(void	x (char *, void (*f)(unsigned int, char*)))
{
    const char texto[20] = "procure E no texto";
    const char *retorno;
    char expected_return[11] = "E no texto";
    char letra = 'E';

    printf("%s", texto);
    x((char *)texto, testes);
    printf("%s", texto);

    // if (ft_memcmp(expected_return, retorno, 5) == 0)
    //     printf("  \x1b[32m[ok]\x1b[0m  ");
    // else
    //     printf("  \x1b[31m[ko]\x1b[0m  ");
}

void teste_ft_striteri(void	x (char *, void (*f)(unsigned int, char*)))
{
    test01(x);
}