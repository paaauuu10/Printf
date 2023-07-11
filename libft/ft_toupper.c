/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:14:56 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/09 11:51:39 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts lowercase to uppercase 

static int	lowletter(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (lowletter(c))
		return (c - 32);
	return (c);
}
