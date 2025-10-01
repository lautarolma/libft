#include "libft.h"
//#include <stdio.h>

size_t ft_strlen(const char* s)
{
	const char* start;

	start = s; 
    while (*start)
	{
		start++;
	}
    return (start - s);
}

/*
int main()
{
    char* s = "asvhnbv";
    printf("Adress of s = %p\n", &s);
    printf("Lenght de s = %ld\n", ft_strlen(s));
    printf("Adress of s = %p\n", &s);
    return (0);
}*/
