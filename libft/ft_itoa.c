/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:19:05 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/22 14:33:52 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Integer convertion into a string.

static int	num_digits(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int c)
{
	char		*array;
	int			numdigits;
	int			test;
	long int	nb;

	nb = c;
	numdigits = num_digits(nb);
	array = (char *)malloc((numdigits + 1) * sizeof(char));
	if (!array)
		return (NULL);
	test = 0;
	array[numdigits] = '\0';
	if (nb < 0)
	{
		array[0] = '-';
		nb = -nb;
		test = 1;
	}
	while (numdigits-- > test)
	{
		array[numdigits] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (array);
}
