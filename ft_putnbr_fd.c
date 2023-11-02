/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:56:08 by ruiolive          #+#    #+#             */
/*   Updated: 2023/10/11 09:56:26 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	num;
	int		x;

	num = n;
	if (num < 0)
	{
		num *= -1;
		write(fd, "-", 1);
		x = ft_count_num(num) + 1;
	}
	else
		x = ft_count_num(num);
	if (num < 10)
	{
		num += '0';
		ft_putchar_fd(num, fd);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	return (x);
}

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	int	x;

	x = ft_count_num(n);
	if (n < 10)
	{
		n += '0';
		ft_putchar_fd(n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	return (x);
}
