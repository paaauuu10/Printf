#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

void	ft_printf_char(char c, int *ret_num)
{
	if (write(1, &c, 1) == -1)
	{
		*ret_num = -1;
		return ;
	}
	(*ret_num)++;
}
