/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_strtrim.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:48:39 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/25 11:26:41 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"


static int	ft_ask_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_size_new(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while(s1[i])
	{
		if (ft_ask_set(set, s1[i]) == 0)
			size++;
		i++;
	}
	return (size);
}

static void teste01(char *f(const char *, const char *))
{
    char src[27] = "Hello \t  Please\n Trim me !";
	char set[4] = " \n\t";
    char *dest;
    dest = f(src, set);
    size_t  seila;
    seila = ft_size_new(dest, set);
    if (seila != 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    free(dest);
}

static void teste02(char *f(const char *, const char *))
{
    char src[24] = "REMOVE ESPACO EM BRANCO";
	char set[5] = " ABC";
    char *dest;
    dest = f(src, set);
    size_t  seila;
    seila = ft_size_new(dest, set);
    if (seila != 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    free(dest);
}


static void teste03(char *f(const char *, const char *))
{
    char *src = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char set[5] = " \n\t";
    char *dest;
    dest = f(src, set);
    size_t  seila;
    seila = ft_size_new(dest, set);
    if (seila != 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    free(dest);
}

static void teste04(char *f(const char *, const char *))
{
    char *src = "";
	char set[5] = "";
    char *dest;
    dest = f(src, set);
    size_t  seila;
    seila = ft_size_new(dest, set);
    if (dest != NULL)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    free(dest);
}


static void teste05(char *f(const char *, const char *))
{
    char *src = ".teste, bla ,.,.";
	char *set = ",.";
    char *dest;
    dest = f(src, set);
    size_t  seila;
    seila = ft_size_new(dest, set);
    if (seila != 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    free(dest);
}


static void teste06(char *f(const char *, const char *))
{
    char *src = "  \t \t \n   \n\n\n\t";
	char *set = " \n\t";
    char *dest;
    dest = f(src, set);
    printf("%s", dest);
    size_t  seila;
    seila = ft_size_new(dest, set);
    if (seila == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}


void    teste_ft_strtrim(char *f(const char *, const char *))
{
	teste01(f);
    teste02(f);
	teste03(f);
	teste04(f);
	teste05(f);
    teste06(f);
}