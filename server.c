/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:46:34 by mayache-          #+#    #+#             */
/*   Updated: 2023/01/10 11:49:16 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_f(int sig, siginfo_t *info, void *p)
{
	static char	str[9];
	static int	cnt;
	static int	c_pid;
	int			n;

	p = NULL;
	n = info->si_pid;
	if (c_pid != info->si_pid)
	{
		c_pid = info->si_pid;
		cnt = 0;
	}
	if (sig == SIGUSR1)
		str[cnt++] = '0';
	else if (sig == SIGUSR2)
		str[cnt++] = '1';
	if (cnt == 8)
	{
		ft_convert(str, n);
		cnt = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_putnbr_fd(getpid(), 1);
	sa.sa_sigaction = &handle_f;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
