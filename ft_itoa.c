/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahlyel <aahlyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:48:17 by aerrahim          #+#    #+#             */
/*   Updated: 2022/12/15 23:32:57 by aahlyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_numsize(int num)
{
	int	nsize;

	nsize = 0;
	if (num < 0)
		nsize++;
	while (num != 0)
	{
		nsize++;
		num /= 10;
	}
	return (nsize);
}

char	*ft_itoa(int n)
{
	int			nsize;
	char		*str;
	long long	num;

	if (!n)
		return (ft_strdup("0"));
	nsize = ft_numsize(n);
	num = n;
	str = malloc(sizeof(char) * nsize + 1);
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	str[nsize--] = '\0';
	while (num)
	{
		str[nsize] = num % 10 + '0';
		nsize--;
		num = num / 10;
	}
	return (str);
}
