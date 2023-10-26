/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:11:25 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/26 14:41:50 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putchar_fd('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-');
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0');
		return ;
	}
	else
	{
		ft_putnbr(n / 10, fd);
		ft_putnbr(n % 10, fd);
	}
}
