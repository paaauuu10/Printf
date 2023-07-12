#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_printf_d(int n)
{
	char	*str;
	int	ret_num;
	
	str = ft_itoa(n);
	if (!str)
		return (-1);
	ret_num = ft_printf_s(str);
	if (ret_num == -1)
	{	
		free(str);
		return (-1);
	}
	free(str);
	return (ret_num);
}
