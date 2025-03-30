/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 09:22:51 by larellan          #+#    #+#             */
/*   Updated: 2025/02/22 17:35:39 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
