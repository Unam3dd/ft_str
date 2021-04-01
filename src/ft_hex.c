#include "ft_str.h"

char hex_tab[16] = {'0' ,'1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};


char hex_to_nibble_byte(char c)
{
    if (c >= 'A' && c <= 'F')
        c |= 0x20;
    
    return ((c >= '0' && c <= '9') ? (c & 0xF) : (c >= 'a' && c <= 'f') ? (10 + (c - 'a')) : 0);
}

char *str_to_hex(char *dst, char *src, buffer_size_t dst_size)
{
    if ((ft_strlen(src) << 1) >= dst_size)
        return (NULL);
    
    char *save = dst;
    
    while (*src) {
        *(dst)++ = hex_tab[*src >> 4];
        *(dst)++ = hex_tab[*(src)++ & 0xF];
    }

    *dst = 0;

    return (save);
}

char *hex_to_str(char *dst, char *src, buffer_size_t dst_size)
{
    char *save = dst;

    if ((ft_strlen(src) >> 1) >= dst_size)
        return (NULL);
    
    while (*src) {
        *dst = hex_to_nibble_byte(*(src)++);
        *dst <<= 4;
        *(dst)++ += hex_to_nibble_byte(*(src)++);
    }

    *dst = 0;
    
    return (save);
}