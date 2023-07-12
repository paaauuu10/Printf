#include <unistd.h>
#include <stdio.h>

int	ft_printf_c(char c)
{
	int	ret_num;
	
	ret_num = write(1, &c, sizeof(char));
	if (ret_num == -1)
		return (-1);
	return (ret_num);
}

/*int	main(void)
{
	char c = 'P';
	int result;

	result = printf("%c", c);
	printf("\nRes real = %d\n", result);
	result = ft_printf_char(c);
	printf("\nRes ft = %d\n", result);
	return (0);
}*/
