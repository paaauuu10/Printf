#include <unistd.h>
#include "ft_printf.h"

void	ft_printf_hexaptr(void *ptr, int **ret_num)
{
	unsigned long	hexa;

	hexa = (unsigned long)ptr;
	ft_printf_string("0x", ret_num);
	if (*(*ret_num) == -1)
		return ;
	ft_printf_hexa_low(hexa, ret_num);
	if (*(*ret_num) == -1)
		return ;
}