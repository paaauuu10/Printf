/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_up.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:41:10 by mde-sara          #+#    #+#             */
/*   Updated: 2023/10/19 13:37:14 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_printf_hexa_up(long long int num, int **ret_num)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (num >= 16)
	{
		ft_printf_hexa_up(num / 16, ret_num);
		if (*(*ret_num) == -1)
		{
			(*(*ret_num)) = -1;
			return ;
		}
	}
	if (write(1, &base[num % 16], 1) == -1)
	{
		(*(*ret_num)) = -1;
		return ;
	}
	(*(*ret_num))++;
}

/*int	main(void)
{
    unsigned long long int num = -5644;
    int count = 0;
    int result;

    result = printf("%lX", num);
    printf("(x) Unsigned hexadecimal integer(uppercase): %lu\n", result);
    ft_printf_hexaup(num, &count);
    printf("(x) Unsigned hexadecimal integer(uppercase): %lu\n", count);
    return (0);
}*/
