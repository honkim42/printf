/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honkim <honkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:54:52 by honkim            #+#    #+#             */
/*   Updated: 2022/02/24 20:04:29 by honkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_unsigned(unsigned int n)
{
	int	len;
	char	*str;

	len = 0;
	str = ft_itoa_unsigned(n);
	len += ft_printstr(str);
	free(str);
	return (len);
}
