/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honkim <honkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:06:01 by honkim            #+#    #+#             */
/*   Updated: 2022/02/24 20:05:21 by honkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	int		len;
	char	*str;

	len = ft_len_unsigned(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str);
}
