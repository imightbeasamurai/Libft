/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahlyel <aahlyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:14:12 by aerrahim          #+#    #+#             */
/*   Updated: 2022/12/15 21:18:13 by aahlyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (s < d)
		while (n--)
			*(d + n) = *(s + n);
	else
	{
		while (i < n)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dst);
}
