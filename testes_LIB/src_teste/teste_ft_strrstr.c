/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_strrstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:36:13 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/20 12:30:42 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

static void test01(char *f(const char *, const char *, size_t))
{
    char big[50] = "lorem ipsum dolor sit amet";
    char little[9] = "ipsum";
    char expected_return[21] = "ipsum dolor sit amet";
    char *pointer_array;
    size_t len;

    len = 15;
    pointer_array = f(big, little, len);
    if (ft_memcmp(pointer_array, expected_return, 5) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test02(char *f(const char *, const char *, size_t))
{
    char big[11] = "123456789";
    char little[1] = "9";
    char *expected_return;
    char *pointer_array;
    size_t len = 8;
    pointer_array = f(big, little, len);
    if (!pointer_array && !expected_return)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test03(char *f(const char *, const char *, size_t))
{
    char big[11] = "123456789";
    char *little = "";
    char *expected_return = "123456789";
    char *pointer_array;
    size_t len = 8;
    pointer_array = f(big, little, len);
    if (ft_memcmp(pointer_array, expected_return, 10) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test04(char *f(const char *, const char *, size_t))
{
    char big[11] = "123456789";
    char *little = "";
    char *expected_return = "123456789";
    char *pointer_array;
    size_t len = 0;
    pointer_array = f(big, little, len);
    if (ft_memcmp(pointer_array, expected_return, 10) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test05(char *f(const char *, const char *, size_t))
{
    char big[11] = "Foo Bar Baz";
    char *little = "Bar";
    char *expected_return = "";
    char *pointer_array;
    size_t len = 4;
    pointer_array = f(big, little, len);
    if (pointer_array == NULL)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test06(char *f(const char *, const char *, size_t))
{
    char big[11] = "";
    char *little = "Bar";
    char *expected_return = "";
    char *pointer_array;
    size_t len = 4;
    pointer_array = f(big, little, len);
    if (pointer_array == NULL)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}

static void test07(char *f(const char *, const char *, size_t))
{
    char big[11] = "abcdefgh";
    char *little = "abc";
    char *expected_return = "";
    char *pointer_array;
    size_t len = 2;
    pointer_array = f(big, little, len);
    if (pointer_array == NULL)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}


static void test08(char *f(const char *, const char *, size_t))
{
    char big[11] = "aaabcabcd";
    char *little = "aabc";
    char *expected_return = "aabcabcd";
    char *pointer_array;
    size_t len = -1;
    pointer_array = f(big, little, len);
    if (ft_memcmp(pointer_array, expected_return, 8) == 0)
        printf("  \x1b[32m[ok]\x1b[0m  ");
    else
        printf("  \x1b[31m[ko]\x1b[0m  ");
}
void    teste_ft_strnstr(char *f(const char *, const char *, size_t))
{
    test01(f);
    test02(f);
    test03(f);
    test04(f);
    test05(f);
    test06(f);
    test07(f);
    test08(f);
}