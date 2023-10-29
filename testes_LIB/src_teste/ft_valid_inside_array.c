/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_inside_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:40:34 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/15 13:25:14 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_valid_inside_array(char *c, int size)
{
    int i;
    int x;

    x = 0;
    i = 0;
    while (i < size)
    {
        if (c[i] != '\0')
        {
            x = -1;
            break ;
        }
        i++;
    }
    return (x);
}