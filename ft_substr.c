/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:45:35 by aerrahim          #+#    #+#             */
/*   Updated: 2022/11/08 22:51:17 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *str, unsigned int start, size_t mlen)
{
    size_t i;
    char *subs;

	subs = (char *) str;
    i = 0;
    if (start >= ft_strlen(str))
    {
        subs[0] = '\0';
        return (NULL);
    }
    while (i < mlen && str[start + i] != '\0')
    {
        subs[i] = str[start + i];
        i++; 
    }
    subs[mlen] = '\0';
	return (subs);
}

