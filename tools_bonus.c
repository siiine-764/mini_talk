/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:18:35 by mayache-          #+#    #+#             */
/*   Updated: 2023/01/10 11:30:06 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

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
	int				power;
	unsigned char	res;
	int				i;

	power = 0;
	res = 0;
	i = 8;
	while (i--)
	{
		res += ft_power(2, power) * (str[i] - '0');
		power++;
	}
	if (res == '\0')
		kill (n, SIGUSR1);
	write(1, &res, 1);
}
