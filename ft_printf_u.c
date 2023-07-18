#include "ft_printf.h"

static int	ft_putnbr_u(unsigned int n,  int *num_char)
{
	unsigned int	div;
	unsigned int	mod;
	int		aux;
	int		*count;
	
	count = 0;
	div = n / 10;
	mod = n % 10;
	if (div > 0)
	{
		if(put_unsigned_nbr(div, count) == -1)
			return (-1);
	}
	aux = ft_printf_char(mod + '0');
	if (aux == -1)
		return (-1);
	(*count) += aux;
	return (aux);
}

unsigned int	ft_printf_u(unsigned int n)
{
	int	ret_num;
	int	*ptr;
	
	ptr = &ret_num;
	ret_num = ft_putnbr_u;
	if (ret_num == -1)
		return (-1);
	return (ret_num);
}
