/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honkim <honkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:06:01 by honkim            #+#    #+#             */
/*   Updated: 2022/02/24 19:41:05 by honkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len(int n)
{
	long	num;
	int		len;

	num = n;
	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = (long)n;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (num < 0)
		num = -num;
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = num % 10 + '0';
		len--;
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
