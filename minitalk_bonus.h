/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:22:01 by mayache-          #+#    #+#             */
/*   Updated: 2023/01/15 14:47:51 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

void	ft_convert(char *str, int n);
int		ft_power(int nbr, int power);
int		ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
#endif