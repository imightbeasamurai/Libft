/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:02:13 by aerrahim          #+#    #+#             */
/*   Updated: 2022/11/14 20:02:24 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_totalwords(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int	ft_wordsize(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int i)
{
	while (i-- > 0)
		free (strs[i]);
	free (strs);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = ft_totalwords(s, c);
	strs = (char **)malloc((words + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		size = ft_wordsize(s, c, i);
		strs[j] = ft_substr((char *)s, i, size);
		if (strs == NULL)
			return (ft_free(strs, j), NULL);
		i += size;
	}
	return (strs[j] = 0, strs);
}
