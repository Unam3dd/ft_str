#include "ft_str.h"

char *ft_int_to_str(int n, char *buffer, buffer_size_t size)
{
    if (ft_count_digits_n(n) >= size)
        return (NULL);
    
    int new = ft_reverse_int(n);

    while (new) {
        *(buffer)++ = (new % 10) + '0';
        new /= 10;
    }

    *buffer = 0;

    return (buffer);
}