/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:38:51 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/09 11:39:07 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Search for a character in a block of memory

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		search;
	size_t				i;

	i = 0;
	search = (unsigned char)c;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (p[i] == search)
			return ((void *)(p + i));
		i++;
	}	
	return (NULL);
}	
