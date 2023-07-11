/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:24:49 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/15 01:09:39 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Looks after the last occurrence of a character in a string

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
