#include <unistd.h>
void    ft_printf_unsigned(unsigned int num, int **ret_num)
{
    char *base;

    base = "0123456789";
    if (num > 9)
    {
        ft_printf_unsigned(num / 10, ret_num);
        if (*(*ret_num) == -1)
            return ;
    }
    if (write(1, &base[num % 10], 1) == -1)
    {
        *(*ret_num) = -1;
        return ;
    }
    (*(*ret_num))++;
}