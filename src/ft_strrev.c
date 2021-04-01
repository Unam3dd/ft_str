#include "ft_str.h"

char *ft_strrev_buffer(char *str, char *rev)
{
    char *save = rev;
    char *end = str;

    while (*end)
        end++;
    
    end = --end;

    while (*end)
        *(rev)++ = *(end)--;
    
    *(rev) = 0;

    return (save);
}

char *ft_strrev(char *str)
{
    size_t size = ft_strlen(str) - 1, i = 0;
    char tmp = 0;

    while (i < size) {
        tmp = str[i];
        str[i++] = str[size];
        str[size--] = tmp;
    }

    return (str);
}