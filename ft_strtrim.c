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
	int	start;
	int	end;

	start = -1;
	if (!s1 || !set)
		return (0);
	while (s1[++start])
		if (!ft_strchr(set, s1[start]))
			break ;
	end = ft_strlen(s1);
	while (end--)
		if (!ft_strchr(set, s1[end]))
			break ;
	return (ft_substr((char *)s1, start, (1 + end - start)));
}
