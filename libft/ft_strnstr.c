/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:50:07 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/12 13:47:28 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns the firs occurence of needle inside haystack, limited by len

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;
	size_t	j;
	size_t	i;

	j = 0;
	len_needle = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[len_needle] != '\0')
		len_needle++;
	while (haystack[j] != '\0' && j <= len - 1)
	{
		i = 0;
		while ((haystack[j + i] == needle[i]) && i + j < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)(haystack + j));
			i++;
		}
		j++;
	}
	return (NULL);
}
