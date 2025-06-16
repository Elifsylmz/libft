/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 22:14:01 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/04 14:47:24 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stddef.h>
# include <stdio.h>

int ft_isalpha(int c);
int	ft_isdigit(int a);
void *ft_bzero(void *s, size_t n);
void *ft_memset(void *str, int ch, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_strlen(const char* str);
char *ft_strrchr(const char *s, int c);

#endif