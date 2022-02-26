/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honkim <honkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:45:05 by honkim            #+#    #+#             */
/*   Updated: 2022/02/24 19:58:39 by honkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(va_list ap)
{
	unsigned long long	n;
	int	len;

	len = 0;
	n = va_arg(ap, unsigned long long );
	len += ft_printstr("0x");
	len += ft_printnbr_base(n, "0123456789abcdef");
	return (len);
}

int	ft_parsing(char ch, va_list ap)
{
	int	len;

	len = 0;
	if (ch == 'c')
		len += ft_printchar((char)va_arg(ap, int));
	else if (ch == 's')
		len += ft_printstr((char *)va_arg(ap, char *));
	else if (ch == 'p')
		len += ft_printptr(ap);
	else if (ch == 'd' || ch == 'i')
		len += ft_printnbr(va_arg(ap, int));
	else if (ch == 'u')
		len += ft_printnbr_unsigned(va_arg(ap, unsigned int));
	else if (ch == 'x')
		len += ft_printnbr_base(va_arg(ap, int), "0123456789abcdef");
	else if (ch == 'X')
		len += ft_printnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	else if (ch == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	char		*str;
	va_list		ap;
	int			len;

	i = 0;
	len = 0;
	str = (char *)format;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{	
			i++;
			len += ft_parsing(format[i], ap);
		}
		else
			len += ft_printchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
