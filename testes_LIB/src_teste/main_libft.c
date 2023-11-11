/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:56:18 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/04 12:42:08 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_teste.h"

int main()
{
/*
Teste 01 - função isalpha
*/
	printf("\n---------------------------------------\n");
	printf("ft_isalpha:  ");
	teste_ascii(isalpha, ft_isalpha);
/*
Teste 02 - função isdigit
*/
	printf("\n---------------------------------------\n");
	printf("ft_isdigit:  ");
	teste_ascii(isdigit, ft_isdigit);
/*
Teste 03 - função isalnum
*/
	printf("\n---------------------------------------\n");
	printf("ft_isalnum:  ");
	teste_ascii(isalnum, ft_isalnum);
/*
Teste 04 - função isascii
*/
	printf("\n---------------------------------------\n");
	printf("ft_isascii:  ");
	teste_ascii(isascii, ft_isascii);
/*
Teste 05 - função isprint
*/
	printf("\n---------------------------------------\n");
	printf("ft_isprint:  ");
	teste_ascii(isprint, ft_isprint);
/*
Teste 06 - função ft_strlen
*/
	printf("\n---------------------------------------\n");
	printf("ft_strlen:   ");
	ft_test_is_string(strlen, ft_strlen);

/*
Teste 07 - função ft_memset
*/
	printf("\n---------------------------------------\n");
	printf("ft_memset:   ");
	teste_memSet(ft_memset);
	printf("\nmemset:      ");
	teste_memSet(memset);
/*
Teste 08 - função ft_bzero
*/
	printf("\n---------------------------------------\n");
	printf("ft_bzero:    ");
	teste_bzero(ft_bzero);
	printf("\nbzero:       ");
	teste_bzero(bzero);
/*
Teste 09 - função ft_memcpy
*/
	printf("\n---------------------------------------\n");
	printf("ft_memcpy:   ");
	teste_memcpy(ft_memcpy);
	printf("\nmemcpy:      ");
	teste_memcpy(memcpy);
/*
Teste 010 - função ft_memmove
*/
	printf("\n---------------------------------------\n");
	printf("ft_memmove:  ");
	teste_memmove(ft_memmove);
	printf("\nmemmove:     ");
	teste_memmove(memmove);
/*
Teste 11 - função ft_strlcpy
*/
	printf("\n---------------------------------------\n");
	printf("ft_strlcpy:  ");
	teste_ft_strlcpy(ft_strlcpy);
	printf("\nstrlcpy:     ");
	teste_ft_strlcpy(strlcpy);
/*
Teste 12 - função teste_ft_strlcat
*/
	printf("\n---------------------------------------\n");
	printf("ft_strlcat:  ");
	teste_ft_strlcat(ft_strlcat);
	printf("\nstrlcat:     ");
	teste_ft_strlcat(strlcat);

/*
Teste 13 - função teste_ft_toupper_lower
*/
	printf("\n---------------------------------------\n");
	printf("ft_toupper   ");
	teste_ft_toupper(ft_toupper);
	printf("\ntoupper      ");
	teste_ft_toupper(toupper);
/*
Teste 14 - função teste_ft_toupper_lower
*/
	printf("\n---------------------------------------\n");
	printf("ft_tolower   ");
	teste_ft_lower(ft_tolower);
	printf("\ntoupper      ");
	teste_ft_lower(tolower);

/*
Teste 15 - função teste_ft_strchr
*/
	printf("\n---------------------------------------\n");
	printf("ft_strchr    ");
	teste_ft_strchr(ft_strchr);
	printf("\ntoupper      ");
	teste_ft_strchr(strchr);

/*
Teste 16 - função teste_ft_strrchr
*/
	printf("\n---------------------------------------\n");
	printf("ft_strrchr   ");
	teste_ft_strrchr(ft_strrchr);
	printf("\nstrrchr      ");
	teste_ft_strrchr(strrchr);

/*
Teste 17 - função teste_ft_strncmp
*/
	printf("\n---------------------------------------\n");
	printf("ft_strncmp   ");
	teste_ft_strncmp(ft_strncmp);
	printf("\nstrncmp      ");
	teste_ft_strncmp(strncmp);

/*
Teste 18 - função teste_ft_memchr
*/
	printf("\n---------------------------------------\n");
	printf("\nft_memchr    ");
	teste_ft_memchr(ft_memchr);
	printf("\nmemchr       ");
	teste_ft_memchr(memchr);

/*
Teste 19 - função teste_ft_memcmp
*/
	printf("\n---------------------------------------\n");
	printf("ft_memcmp    ");
	teste_ft_memcmp(ft_memcmp);
	printf("\nmemcmp	     ");
	teste_ft_memcmp(memcmp);
/*
Teste 20 - função teste_ft_strnstr
*/
	printf("\n---------------------------------------\n");
	printf("ft_strnstr   ");
	teste_ft_strnstr(ft_strnstr);
	printf("\nstrnstr      ");
	teste_ft_strnstr(strnstr);

/*
Teste 21 - função teste_ft_atoi
*/
	printf("\n---------------------------------------\n");
	printf("ft_atoi:     ");
	teste_ft_atoi(ft_atoi);
	printf("\n");
	printf("atoi:        ");
	teste_ft_atoi(atoi);

/*
Teste 22 - função teste_ft_strdup
*/
	printf("\n---------------------------------------\n");
	printf("ft_strdup:   ");
	teste_ft_strdup(ft_strdup);
	printf("\n");
	printf("strdup:      ");
	teste_ft_strdup(strdup);

/*
Teste 23 - função teste_ft_strdup
*/
	printf("\n---------------------------------------\n");
	printf("ft_substr:   ");
	teste_ft_substr(ft_substr);
/*
Teste 24 - função teste_ft_strtrim
*/
	printf("\n---------------------------------------\n");
	printf("ft_strtrim:  ");
	teste_ft_strtrim(ft_strtrim);

/*
Teste 25 - função teste_ft_itoa
*/
	printf("\n---------------------------------------\n");
	printf("ft_itoa:     ");
	teste_ft_itoa(ft_itoa);
/*
Teste 26 - função teste_ft_split
*/
	printf("\n---------------------------------------\n");
	printf("ft_split:    ");
	teste_ft_split(ft_split);

/*
Teste 27 - função teste_ft_lstnew
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstnew:    ");
	teste_ft_lstnew(ft_lstnew);

/*
Teste 28 - função teste_ft_lstnew
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstadd_front:    ");
	teste_ft_lstadd_front(ft_lstadd_front);

/*
Teste 29 - função teste_ft_lstsize
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstsize:    ");
	teste_ft_lstsize(ft_lstsize);

/*
Teste 30 - função teste_ft_lstlast
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstlast:    ");
	teste_ft_lstlast(ft_lstlast);

/*
Teste 31 - função teste_ft_lstadd_back
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstadd_back:    ");
	teste_ft_lstadd_back(ft_lstadd_back);


/*
Teste 32 - função teste_ft_lstdelone
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstadd_back:    ");
	teste_ft_lstdelone(ft_lstdelone);

/*
Teste 33 - função teste_ft_lstclear
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstclear:    ");
	teste_ft_lstclear(ft_lstclear);
/*
Teste 34 - função teste_ft_lstiter
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstiter:     ");
	teste_ft_lstiter(ft_lstiter);

/*
Teste 35 - função teste_ft_lstmap
*/
	printf("\n---------------------------------------\n");
	printf("ft_lstmap:     ");
	teste_ft_lstmap(ft_lstmap);


/*
Teste 35 - teste_ft_striteri
*/
	printf("\n---------------------------------------\n");
	printf("ft_striteri:       ");
	teste_ft_striteri(ft_striteri);


}