#include <unistd.h>

void	ft_printf_hexa_low(long long int num, int **ret_num)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
	{
		ft_printf_hexa_low(num / 16, ret_num);
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