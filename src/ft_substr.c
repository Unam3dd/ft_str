#include "ft_str.h"

bool ft_substr(const char *str, const char *substr)
{
    while (*str)
        if (*(str)++ == *substr)
            substr++;
        
    return (*substr == 0);
}