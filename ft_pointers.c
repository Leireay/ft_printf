/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 09:23:11 by larellan          #+#    #+#             */
/*   Updated: 2025/02/22 17:36:31 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_search_pointer(unsigned long long ptr);

int	ft_print_pointer(unsigned long long ptr)
{
	int	size;

	size = 0;
	size += ft_print_string("0x");
	if (ptr == 0)
		size += ft_print_character('0');
	else
		size += ft_search_pointer(ptr);
	return (size);
}

static int	ft_search_pointer(unsigned long long ptr)
{
	int	size;

	size = 0;
	if (ptr >= 16)
	{
		size += ft_search_pointer(ptr / 16);
		size += ft_search_pointer(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			size += ft_print_character(ptr + '0');
		else
			size += ft_print_character(ptr - 10 + 'a');
	}
	return (size);
}
