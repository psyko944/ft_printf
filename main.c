#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
int main(void)
{
	//printf("\n%d\n", ft_printf("%%"));
	//printf("len = %d\n", printf("%lu\n", LONG_MAX));
	//printf("len = %d\n", ft_printf("%u\n", LONG_MAX));
	printf("%p", (void *)5);
	return (0);
}
