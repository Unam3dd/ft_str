CC = gcc
INCLUDES = includes
SRC_FILES = src/ft_binary.c \
			src/ft_clear.c \
			src/ft_count_chr.c \
			src/ft_count_digits.c \
			src/ft_count_substr.c \
			src/ft_find_str.c \
			src/ft_hex.c \
			src/ft_int_to_str.c \
			src/ft_memcpy.c \
			src/ft_replace_chr.c \
			src/ft_reverse_int.c \
			src/ft_str_to_int.c \
			src/ft_strcat.c \
			src/ft_strcmp.c \
			src/ft_strcpy.c \
			src/ft_strlen.c \
			src/ft_strncat.c \
			src/ft_strncpy.c \
			src/ft_strrev.c \
			src/ft_substr.c \
			src/ft_zmem.c \
			src/ft_memset.c \
			src/ft_strchr.c \
			src/ft_memchr.c \
			src/ft_memmove.c \
			src/ft_memcmp.c \
			src/ft_strdup.c \
			src/list.c \
			src/ft_split.c \
			src/ft_join.c

all:
	$(CC) -c -I $(INCLUDES) $(SRC_FILES)
