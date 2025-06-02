/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:23 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 15:47:23 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int a){
    if (a >= 0 && a <= 127)
        return 1;
    return 0;
}

int main()
{
    int a = 7;
    int b = 84;
    char c = 'f';
    char d = '8';
    unsigned int e = 435;

    if (ft_isascii(a) == 1)
        printf("%d ascii\n", a);
    else
    printf("%d ascii değil.\n", a);

    if (ft_isascii(b) == 1)
        printf("%d ascii\n", b);
    else
    printf("%d ascii değil.\n", b);

    if (ft_isascii(c) == 1)
        printf("%c ascii\n", c);
    else
    printf("%c ascii değil.\n", c);

    if (ft_isascii(d) == 1)
        printf("%c ascii\n", d);
    else
    printf("%c ascii değil.\n", d);

    if (ft_isascii(e) == 1)
        printf("%d ascii\n", e);
    else
    printf("%d ascii değil.\n", e);

}