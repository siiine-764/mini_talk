/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:00:46 by mayache-          #+#    #+#             */
/*   Updated: 2023/01/15 14:48:05 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

void	ft_convert(char *str, int n);
int		ft_power(int nbr, int power);
int		ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
#endif