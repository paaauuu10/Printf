/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:37:03 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/12 13:50:28 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Gets a substring from a string.

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	end;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	end = ft_strlen(s + start);
	if (end < len)
		len = end;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[start + i] && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
