#pragma once
#include <stdint.h>
#include <stddef.h>
#include <limits.h>

typedef uint8_t bool;
typedef unsigned long long buffer_size_t;

typedef struct list
{
    char *str;
    struct list *next;
    struct list *prev;
    size_t index;
} list_t;

// ft_strlen.c
uint64_t ft_strlen(const char *str);

// ft_strcmp.c
uint8_t ft_strcmp(const char *str1, const char *str2);

// ft_substr.c
bool ft_substr(const char *str, const char *substr);

// ft_count_chr.c
uint64_t ft_count_chr(const char *str, char c);

// ft_count_substr.c
uint64_t ft_count_substr(const char *str, const char *substr);

// ft_zmem.c
void ft_zmem(char *str, buffer_size_t buffer_size);

// ft_strcpy.c
char *ft_strcpy(char *dst, char *src);

// ft_strncpy.c
char *ft_strncpy(char *dst, char *src, buffer_size_t size);

// ft_replace_chr.c
char *ft_replace_chr(char *str, char replace, char new);

// ft_find_substr.c
char *ft_find_str(char *str, char *substr);

// ft_strrev.c
char *ft_strrev_buffer(char *str, char *rev);
char *ft_strrev(char *str);

// ft_memcpy.c
void *ft_memcpy(void *dst, void *src, size_t size);

// ft_str_to_int.c
int str_to_int(char *str);

// ft_int_to_str.c
char *ft_int_to_str(int n, char *buffer, buffer_size_t size);

// ft_reverse_int.c
int ft_reverse_int(int n);

// ft_clear.c
void ft_clear(char *str);

// ft_count_digits.c
int ft_count_digits(char *str);
int ft_count_digits_n(int n);

// ft_hex.c
char hex_to_nibble_byte(char c);
char *str_to_hex(char *dst, char *src, buffer_size_t dst_size);
char *hex_to_str(char *dst, char *src, buffer_size_t dst_size);

// ft_binary.c
char *ft_byte_to_binary(char *dst, unsigned char c, buffer_size_t size_dst);
uint8_t ft_binary_to_byte(char *src);

// ft_strcat.c
char *ft_strcat(char *dst, char *src);

// ft_strncat.c
char *ft_strncat(char *dst, char *src, size_t n);

// ft_memset.c
void *ft_memset(void *dst, int value, size_t n);

// ft_strchr.c
char *ft_strchr(char *dst, int c);

// ft_memchr.c
void *ft_memchr(void *str, int c, size_t n);

// ft_memmove.c
void *ft_memmove(void *str1, void *str2, size_t n);

// ft_memcmp.c
int ft_memcmp(void *str1, void *str2, size_t n);

// ft_strdup.c
char *ft_strdup(const char *str);

// list.c
list_t *new_list(void);
void push_list(list_t **list, list_t *new);
void pop_list(list_t **list);
list_t *get_list(list_t **list, uint32_t n);
void free_list(list_t **list);

// ft_split.c
list_t *ft_split(char *str, char *delim);
void free_list_split(list_t **list);

// ft_join.c
char *ft_join(list_t **list, char *join_str);