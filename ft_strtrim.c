/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:00:49 by aerrahim          #+#    #+#             */
/*   Updated: 2022/11/14 20:00:51 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t i;
	size_t j;
	char *trimmed;
	
	if (!s1 || !set)
		return (NULL)
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr((char *)set, s1[i])
	       i++;
	while (ft_strchr((char *)set, s1[j])
	       j--;
	if (j < i)
	       return (ft_strdup(""));
	trimmed = malloc(j - i + 2);
	if (!trimmed)
	       return (NULL);
	ft_strlcpy(trimmed, s1 + i, j - i + 2);
	return (trimmed);
}
