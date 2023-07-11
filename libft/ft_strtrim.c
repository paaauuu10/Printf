/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:13:31 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/20 11:47:32 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//delete the specified characters at the start and end of a string

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;	

	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	last = ft_strlen(s1);
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	return (ft_substr(s1, first, last - first));
}
