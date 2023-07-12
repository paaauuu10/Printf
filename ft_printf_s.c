#include "./libft/libft.h"
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


int	ft_printf_s(char *str)
{
	int	ret_num;
	
	ret_num = write(1, str, ft_strlen(str));
	if (ret_num == -1)
		return (-1);
	return (ret_num);	
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
