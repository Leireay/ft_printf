#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int i = NULL;
	char *str = NULL;

	ft_printf("%d\n %i\n %u\n %c\n %x\n %X\n %p\n %s\n\n", 17, 1908, -2311, 'x', 11, 11, i, str);
	printf("%d\n %i\n %u\n %c\n %x\n %X\n %p\n %s\n", 17, 1908, -2311, 'x', 11, 11, i, str);
	return (0);
}
