/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:45:35 by aerrahim          #+#    #+#             */
/*   Updated: 2022/11/14 19:58:15 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t mlen)
{
	size_t	i;
	char	*p;
	char	*c;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (mlen > ft_strlen(s))
		mlen = ft_strlen(s) - start;
	p = (char *)malloc(sizeof(char) * (mlen + 1));
	if (!p)
		return (NULL);
	c = (char *)s;
	while (mlen > 0)
	{
		p[i] = c[start];
		i++;
		start++;
		mlen--;
	}
	p[i] = '\0';
	return (p);
}
