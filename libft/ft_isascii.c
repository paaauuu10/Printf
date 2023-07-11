/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:31:33 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/09 11:37:15 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if the character is in the ASCII table

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
