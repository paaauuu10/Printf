#include <unistd.h>
#include <stdio.h>

void	ft_printf_string(char *str, int **ret_num)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		if (write(1, str++, 1) == -1)
		{
			**ret_num = -1;
			return ;
		}
		(*(*ret_num))++;
	}
}

/*int	main()
{
	char str[] = "How are you";
	int	result;

	result = printf("%s", str);
	printf("\nResultat real = %d\n", result);
	result = ft_printf_string(str);
	printf("\nResultat propi = %d\n", result);
	return (0);
}*/
