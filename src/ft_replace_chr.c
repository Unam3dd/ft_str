#include "ft_str.h"

char *ft_replace_chr(char *str, char replace, char new)
{
    char *save = str;

    while (*str) {
        
        if (*str == replace)
            *str = new;

        str++;
    }

    return (save);
}