/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:53:05 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/26 18:55:56 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_putstr_count(char *s);
int		ft_print_integer(int n);
char	*ft_utoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);
int		ft_puthex(unsigned long long n, char specifier);
int		ft_print_pointer(void *ptr);
#endif
