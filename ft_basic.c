#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	size;

	if (!str)
		return (ft_print_string("null"));
	size = 0;
	while (str[size])
		size += ft_print_character(str[size]);
	return (size);
}

int	ft_print_number(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (ft_print_string("-2147483648"));
	if (n < 0)
	{
		size += ft_print_character('-');
		n = -n;
	}
	size += ft_print_unsigned((unsigned int)n);
	return (size);
}

int	ft_print_unsigned(unsigned int n)
{
	int	size;

	size = 0;
	if (n >= 10)
		size += ft_print_unsigned(n / 10);
	size += ft_print_character((n % 10) + '0');
	return (size);
}
