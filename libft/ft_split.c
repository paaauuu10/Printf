/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 02:49:34 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/15 02:54:49 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Takes a string and splits the string into an array of substrigs
//uses a delimiter

static char	**ft_free(char **split, size_t i)
{
	while (i-- > 0)
		free(split[i]);
	free(split);
	return (NULL);
}

int	checkwords(char const *s, char c)
{
	int	numwords;
	int	i;

	numwords = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			numwords++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (numwords);
}

char	**createwords(char const *s, char c, char **split)
{
	int	i;
	int	last;

	i = 0;
	while (*s)
	{
		last = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{	
			s++;
			last++;
		}
		if (last > 0)
		{	
			split[i] = ft_substr(s - last, 0, last);
			if (!split[i])
				return (ft_free(split, i));
			i++;
		}
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = (char **)malloc((checkwords(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = (createwords(s, c, split));
	return (split);
}	
