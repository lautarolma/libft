#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int		ft_isalpha(int c);
size_t	ft_strlen(const char* s);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void*	ft_memset(void* s, int c, size_t n);
void*	ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char* dst, const char* src, size_t size);



#endif
