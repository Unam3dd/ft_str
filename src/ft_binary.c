#include "ft_str.h"


char *ft_byte_to_binary(char *dst, unsigned char c, buffer_size_t size_dst)
{
    if (size_dst < CHAR_BIT)
        return (NULL);
    
    char *save = dst;
    
    while (c) {
        *(dst)++ = (c & 1) | '0';
        c >>= 1;
    }

    *dst = 0;

    if (ft_strlen(save) < 8) {
        *(dst)++ = '0';
        *dst = 0;
    }

    ft_strrev(save);
    
    return (save);
}

uint8_t ft_binary_to_byte(char *src)
{
    uint8_t to_byte = 0, b = 128;

    while (*src) {
        to_byte += (*src & 0x1) * b;
        b >>= 1;
        src++;
    }

    return (to_byte);
}