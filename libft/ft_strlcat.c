/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:45:52 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/15 01:28:19 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/*Concatenates two strings, ensuring the result is properly null-terminated 
and limited to a specified size*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[i] != '\0' && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

/*int main(int argc, char **argv)
{
    char    jo;
    char    ells;
    if (argc == 3)
    {
        jo = ft_strlcat(argv[1], argv[2], 5);
        ells = strlcat(argv[1], argv[2], 5);
        printf("jo: %d | ells: %d\n", jo, ells);
    }
    return (0);
}*/
