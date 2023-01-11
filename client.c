/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:32:42 by mayache-          #+#    #+#             */
/*   Updated: 2023/01/11 16:56:45 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_error(void)
{
	write(1, "\033[0;31m", 7);
	write(1, "error", 5);
	write(1, "\033[0m", 7);
}

void	message_schicken(int pid, int cr)
{
	int	byt;

	byt = 8;
	while (byt--)
	{
		if (!(cr & (1 << byt)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc != 3)
		ft_error();
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		message_schicken(pid, '\n');
		while (argv[2][i])
			message_schicken(pid, argv[2][i++]);
		message_schicken(pid, '\0');
	}
	return (0);
}
