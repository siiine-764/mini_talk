/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:00:05 by mayache-          #+#    #+#             */
/*   Updated: 2023/01/15 14:48:31 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_power(int nbr, int power)
{
	int	res;

	res = 1;
	while (power)
	{
		res *= nbr;
		power--;
	}
	return (res);
}

void	ft_convert(char *str, int n)
{
	int	power;
	int	res;
	int	i;

	(void)n;
	power = 0;
	res = 0;
	i = 8;
	while (i--)
	{
		res += ft_power(2, power) * (str[i] - '0');
		power++;
	}
	write(1, &res, 1);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		nbr = n * -1;
		ft_putchar_fd('-', fd);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + 48, fd);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + str[i++] - '0';
	return (res * sign);
}
