/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 10:31:08 by larellan          #+#    #+#             */
/*   Updated: 2025/02/22 17:51:30 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <sys/types.h>

int		ft_printf(const char *str, ...);
int		ft_print_pointer(unsigned long long ptr);
size_t	ft_putnbr_base(ssize_t nbr, char *base, size_t len, char spf);
size_t	ft_putstr(const char *str);
size_t	ft_putchar(const char c);
char	*ft_strchr(const char *s, int c);
int		ft_print_string(char *str);
int		ft_print_number(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexadecimal(unsigned int num, char word);
int		ft_print_character(int character);
#endif  /* FT_PRINTF_H */
