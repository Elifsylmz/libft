/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:55:40 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/04 15:06:07 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// void *memmove(void *dest, const void *src, size_t n);

// int main()
// {
// 	char csrc[100] = "Geeksfor";
// 	memmove(csrc + 5, csrc, strlen(csrc) + 4);
// 	printf("%s", csrc);
// 	return 0;

// }

int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
    
    // when overlap happens then it just ignore it
    memcpy(first + 5, first, 10);
    printf("memcpy overlap : %s\n ", str);

    // when overlap it start from first position
    memmove(second + 5, first, 10);
    printf("memmove overlap : %s\n ", str);

    return 0;
}