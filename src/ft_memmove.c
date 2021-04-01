#include "ft_str.h"

void *ft_memmove(void *str1, void *str2, size_t n)
{
    char *cstr1 = (char *)str1;
    char *cstr2 = (char *)str2;

    while (*cstr1 && n--)
        *(cstr1)++ = *(cstr2)++;
    
    *cstr1 = 0;

    return (str1);
}