/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:25:54 by aerrahim          #+#    #+#             */
/*   Updated: 2022/12/17 18:25:57 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!set || !*s1)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr((char *)set, s1[i]))
		i++;
	while (ft_strchr((char *)set, s1[j]))
		j--;
	if (j < i)
		return (ft_strdup(""));
	trimmed = malloc(j - i + 2);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + i, j - i + 2);
	return (trimmed);
}
