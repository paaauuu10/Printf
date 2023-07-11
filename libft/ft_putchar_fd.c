/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:52:32 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/20 13:20:55 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Writes a character to the file descriptor.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
