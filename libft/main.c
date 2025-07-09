/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:57:22 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/07/06 22:44:27 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>



void	ft_to_upper(unsigned int i, char *s)
{
	(void)i;

	if(*s >= 'a' && *s <= 'z')
		*s = *s - 32;
}

int main()
{
	char s[] = "aaaaabbbbbbbsssssselma armut karpuzyyyyyyyyyyzzzzzzz";
	
	char *tut = ft_strtrim(s, "absyz");

	ft_striteri(tut, ft_to_upper);

	size_t i;

	i = 0;
	while(tut[i])
	{
		if(tut[i] == ' ')
			tut[i] = '\n';
		i++;
	}

	tut = ft_strjoin(tut, "Z");
	
	int fd = open("deneme.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fd == -1)
	{
		perror("Dosya açılamadı");
		free(tut);
	}
	ft_putendl_fd(tut, 1);
}

//umut 10,mehmet 20,yılmaz 30,murat 40
//eslem 10 senem 20 murat 40 umut 20



//ft_split


// int main()
// {
// 	char s1[] = "umut 10,mehmet 20,yılmaz 30,murat 40";
//     char s2[] = "eslem 10 senem 20 murat 40 umut 20";
    
//     int i;
	
//     i = 0;
//     while(s2[i])
//     {
// 		if(s2[i] == ' ' && s2[i - 1] == '0')
// 		s2[i] = ',';
// 	i++;
// }
// s1[ft_strlen(s1)] = ',';

// char *str;

// str = ft_strjoin(s1, s2);

// char **res;

// res = ft_split(str, ',');

// size_t count;

// count = 0;
// while(res[count])
// {
// 	count++;
// }

// i = 0;
// int j;
// while(res[i])
// {
// 	j = i + 1;
// 	while(res[j])
// 	{
// 		if(ft_strncmp(res[i], res[j], 10) == 0)
// 		{
// 			ft_memmove(res[j], res[count - 1], (ft_strlen(res[count - 1]) + 1) );
// 			break;
// 			// ft_bzero(res[i], ft_strlen(res[i]));
// 			// break;
// 		}
// 		j++;
// 	}
//     i++;
// }

// i = 0;
// j = 0;
// size_t start;
// start = 0;
// while(res[i])
// {
// 	while(res[i][j])
// 	{

// 		if(res[i][j] == ' ')
// 		ft_substr(res[i], 0, j);

// 		j++;
// 	}

// 	ft_split()

// }

// i = 0;
// while(res[i])
// {
// 	if(i != (count -1))
// 		printf("%s\n", res[i]);
// 	else 
// 		break;		
// 	i++;
// }

// }

// son indexteki stringi null olan yere memmove kullanarak taşıma
// ya da farklı bi yolla çöz murat 40 için 

// isim ve sayıının arasına yası ekle
// burda ft_split ve join kullanarak döngü ile 
// 
// isim yası sayı formatında alt alta bi dosyaya yazdır

// sayıları al ve inte dönüştür
// topla ve bi dosya yaz




// int main()
// {

// 	// fatih elif baris ali veli
// 	// **
// 	// *   *    *    *     *

// 	char *str = " a b c d ";
// 	int i = 0;
// 	char **res = ft_split(str, ' ');
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		res++;
// 	}
// 	i = 0;
// 	while (res[i])
// 	{
// 		free(res[i]);
// 	}
	
// }