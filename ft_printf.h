/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honkim <honkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:10:13 by honkim            #+#    #+#             */
/*   Updated: 2022/02/24 19:11:38 by honkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printchar(char c);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_printnbr_unsigned(unsigned int n);
int		ft_printnbr_base(int nbr, char *base);
char	*ft_itoa(int n);
char	*ft_itoa_unsigned(unsigned int n);

int		ft_strlen(char *s);
int		ft_parsing(char ch, va_list ap);
int		ft_printf(const char *format, ...);

#endif
