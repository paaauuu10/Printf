#include <unistd.h>
#include <stdio.h>

void	ft_printf_string(char *str, int *ret_num)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		if (write(1, str++, 1) == -1)
		{
			*ret_num = -1;
			return ;
		}
		(*ret_num)++;
	}
}

