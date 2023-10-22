#include "ft_printf.h"
#include <stdio.h>
void	ft_printf_char(char c, int *ret_num)
{
	if (write(1, &c, 1) == -1)
	{
		*ret_num = -1;
		return ;
	}
	(*ret_num)++;
}

/*int main(void)
{
    int resultado;
    int count = 0;

    resultado = printf("%c%c%c", ' ', ' ', ' ');
    printf("Cantidad de caracteres impresos: %d\n", resultado);

    count = 0; // Reinicializa count a 0 antes de usarlo con ft_printf_char.
    ft_printf_char(' ', &count); // Llama a ft_printf_char para un solo carácter.
    ft_printf_char(' ', &count); // Llama a ft_printf_char para otro carácter.
    ft_printf_char(' ', &count); // Llama a ft_printf_char para un tercer carácter.
    printf("Cantidad de caracteres impresos: %d\n", count);
    return (0);
}*/