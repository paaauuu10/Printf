#include <unistd.h>

void    ft_printf_id(long long int num, int **ret_num, char *base)
{
    if (num < 0)
    {
        if (write(1,"-", 1) == -1)
        {
            *(*ret_num) = -1;
            return ;
        }
        num = -num;
        (*(*ret_num))++;
    }
    if (num >= 10)
    {
        ft_printf_id(num / 10, ret_num, base);
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