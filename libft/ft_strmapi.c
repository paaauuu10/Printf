/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:13:55 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/20 12:28:40 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//applies a function to all the characters og string, and creates a new string

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*snew;
	unsigned int	i;

	i = 0;
	snew = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!snew)
		return (NULL);
	while (s[i])
	{
		snew[i] = f(i, s[i]);
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
