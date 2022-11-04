/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:38:53 by aerrahim          #+#    #+#             */
/*   Updated: 2022/11/01 17:03:20 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
// int main()
// {
// 	char *b1 = (char*)malloc(sizeof(char) * (0xF0000 + 1));
// 	char *b2 = (char*)malloc(sizeof(char) * (0xF0000 + 1));

// 	*b1 = 0;
// 	*b2 = 0;
// 	long p = "\0\0\0AMINE";
// 	printf("%d\n",sizeof(long));
// 	printf("-%s-\n",(char *)ft_memset(b2, '\5', 0xF0000));	
// } && s[i] != '\0'