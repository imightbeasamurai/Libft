/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:54:25 by aerrahim          #+#    #+#             */
/*   Updated: 2022/11/14 19:54:27 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
        int     i;
        int     j;
        char    *s;

        if (!s1 && !s2)
                return (NULL);
        if (!s1)
                return ((char *) s2);
        if (!s2)
                return ((char *) s1);
        s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
        if (!s)
                return (NULL);
        i = 0;
        while (s1[i])
        {
                s[i] = s1[i];
                i++;
        }
        j = 0;
        while (s2[j])
        {
                s[i + j] = s2[j];
                j++;
        }
        s[i+j] = '\0';
        return (s);
}
