/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:51:40 by pbotargu          #+#    #+#             */
/*   Updated: 2023/10/26 10:51:41 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *s, ...);
void	ft_printf_char(char c, int *ret_num);
void	ft_printf_string(char *str, int *ret_num);
void	ft_printf_id(long long int num, int *ret_num, char *base);
void	ft_printf_unsigned(unsigned int num, int *ret_num);
void	ft_printf_hexa_up(unsigned long long int num, int *ret_num);
void	ft_printf_hexa_low(unsigned long long int num, int *ret_num);
void	ft_printf_hexaptr(void *ptr, int *ret_num);

#endif
