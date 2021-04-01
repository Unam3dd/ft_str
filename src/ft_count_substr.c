#include "ft_str.h"

uint64_t ft_count_substr(const char *str, const char *substr)
{
    uint64_t n = 0;
    const char *save = substr;

    while (*str) {

        if (*(str)++ == *substr)
            substr++;

        if (*substr == 0) {
            n++;
            substr = save;
        }
    }

    return (n);
}