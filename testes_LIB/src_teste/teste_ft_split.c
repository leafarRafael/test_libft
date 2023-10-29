/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:03:02 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/27 08:22:24 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void test01(char **f(char const *, char))
{
    char *s = "\n\n\n\nlorem\n\n\n\n\nipsum\n\n\ndolor\nsit\n\n\namet\n\n\n\n\n";
    char set = '\n';
    char **pointer_array;
    int i;

    i = 0;
    pointer_array = f(s, set);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    while (pointer_array[i] != NULL)
        i++;
    while (i >= 0)
    {
        free(pointer_array[i]);
        i--;
    }
    free(pointer_array);

}


static void test02(char **f(char const *, char))
{
    char *s = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
    char set = ' ';
    char **pointer_array;
    int i;

    i = 0;
    pointer_array = f(s, set);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    while (pointer_array[i] != NULL)
        i++;
    while (i >= 0)
    {
        free(pointer_array[i]);
        i--;
    }
    free(pointer_array);
}


static void test03(char **f(char const *, char))
{
    char *s = "split  ||this|for|me|||||!|";
    char set = '|';
    char **pointer_array;
    int i;

    i = 0;
    pointer_array = f(s, set);

    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    while (pointer_array[i] != NULL)
        i++;
    while (i >= 0)
    {
        free(pointer_array[i]);
        i--;
    }
    free(pointer_array);
}

static void test04(char **f(char const *, char))
{
    char *s = "split  ||this|for|me|||||!|";
    char set = 'a';
    char **pointer_array;
    int i;

    i = 0;
    pointer_array = f(s, '\0');
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    while (pointer_array[i] != NULL)
        i++;
    while (i >= 0)
    {
        free(pointer_array[i]);
        i--;
    }
    free(pointer_array);

}

static void test05(char **f(char const *, char))
{
    char *s = "      split       this for   me  !       ";
    char set = ' ';
    char **pointer_array;
    int i;

    i = 0;
    pointer_array = f(s, set);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    while (pointer_array[i] != NULL)
        i++;
    while (i >= 0)
    {
        free(pointer_array[i]);
        i--;
    }
    free(pointer_array);

}

static void test06(char **f(char const *, char))
{
    char *s = "                  ";
    char set = ' ';
    char **pointer_array;
    int i;

    i = 0;
    pointer_array = f(s, set);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");

    while (pointer_array[i] != NULL)
        i++;
    while (i >= 0)
    {
        free(pointer_array[i]);
        i--;
    }
    free(pointer_array);

}

static void test07(char **f(char const *, char))
{
    char *s = "Tripouille";
    char set = ' ';
    char **pointer_array;
    int i;

    i = 0;
    pointer_array = f(s, set);
    if (0 == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
    while (pointer_array[i] != NULL)
        i++;
    while (i >= 0)
    {
        free(pointer_array[i]);
        i--;
    }
    free(pointer_array);
}


void    teste_ft_split(char **f(const char *, char))
{
    test01(f);
    test02(f);
    test03(f);
    test04(f);
    test05(f);
    test06(f);
    test07(f);
}