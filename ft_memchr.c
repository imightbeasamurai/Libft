/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:06:26 by aerrahim          #+#    #+#             */
/*   Updated: 2022/11/03 22:09:05 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)(s++) == (unsigned char) c)
			return ((void *)(s - 1));
		n = n - 1;
	}
	return (NULL);
}
/*
{
	while (n--)
	{
		if(*(unsigned char *)(s++) == (unsigned char) c)
			return ((void *)(s - 1));
	}
	return NULL;
}
*/
