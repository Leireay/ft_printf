#include "ft_printf.h"

static int	ft_length_hexadecimal(unsigned int num);
static int	ft_search_hexadecimal(unsigned int num, char word);

int	ft_print_hexadecimal(unsigned int num, char word)
{
	if (num == 0)
		return (ft_print_character('0'));
	return (ft_search_hexadecimal(num, word));
}

static int	ft_search_hexadecimal(unsigned int num, char word)
{
	int	size;

	size = 0;
	if (num >= 16)
		size += ft_search_hexadecimal(num / 16, word);
	if (num % 16 < 10)
		size += ft_print_character((num % 16) + '0');
	else
	{
		if (word == 'x')
			size += ft_print_character((num % 16) - 10 + 'a');
		else if (word == 'X')
			size += ft_print_character((num % 16) - 10 + 'A');
	}
	return (size);
}

static int	ft_length_hexadecimal(unsigned int num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}
