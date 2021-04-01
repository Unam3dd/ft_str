#include "ft_str.h"
#include <stdlib.h>

char *ft_strdup(const char *str)
{
    char *new_ptr = (char *)malloc(sizeof(char) * ft_strlen(str)+1);
    ft_strcpy(new_ptr, (char *)str);

    return (new_ptr);
}