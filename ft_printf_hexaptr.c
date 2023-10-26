/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexaptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:20:10 by pbotargu          #+#    #+#             */
/*   Updated: 2023/10/24 12:20:11 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_printf_hexaptr(void *ptr, int *ret_num)
{
	unsigned long	hexa;

	hexa = (unsigned long)ptr;
	ft_printf_string("0x", ret_num);
	if ((*ret_num) == -1)
		return ;
	ft_printf_hexa_low(hexa, ret_num);
	if ((*ret_num) == -1)
		return ;
}
