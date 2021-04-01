#include "ft_str.h"

uint8_t ft_strcmp(const char *str1, const char *str2)
{
    if (ft_strlen(str1) != ft_strlen(str2))
        return (1);
    
    while (*str1 && *str2) {
        
        if (*str1 != *str2)
            return (1);
        
        str1++;
        str2++;
    }

    return (0);
}