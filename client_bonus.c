#include "minitalk_bonus.h"

void	ft_confirm(int sig)
{
	if (sig == SIGUSR1)
		write(1, "MESSAGE RECEIVED 😀\n", 23);
}

void	ft_error(void)
{
	write(1, "error 💀", 10);
}

void	message_schicken(int pid, unsigned char cr)
{
	int	i;

	i = 8;
	while (i--)
	{
		if (!(cr & (1 << i)))
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
		signal(SIGUSR1, ft_confirm);
		pid = ft_atoi(argv[1]);
		message_schicken(pid, '\n');
		while (argv[2][i])
			message_schicken(pid, (unsigned char )argv[2][i++]);
		message_schicken(pid, '\0');
	}
	return (0);
}
