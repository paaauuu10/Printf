#ifndef LIBFT_H
# define LIBFT_H

void	ft_printf_char(char c, int **ret_num);
void    ft_printf_string(char *str, int **ret_num);
void    ft_printf_id(long long int num, int **ret_num, char *base);
void    ft_printf_unsigned(unsigned int num, int **ret_num);
void    ft_printf_hexa_up(long long int num, int **ret_num);
void    ft_printf_hexa_low(long long int num, int **ret_num);
void	ft_printf_hexaptr(void *ptr, int **ret_num);

#endif