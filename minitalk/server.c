/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyurtsev <fyurtsev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:00:28 by fyurtsev          #+#    #+#             */
/*   Updated: 2022/04/18 11:00:30 by fyurtsev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_usr(int sig)
{
	static char	str = 0;
	static int	get_byte = 0;

	if (sig == SIGUSR1)
		str = str | 1;
	if (++get_byte == 8)
	{
		get_byte = 0;
		if (!str)
			ft_putchar('\n');
		ft_putchar(str);
		str = 0;
	}
	else
		str <<= 1;
}

int	main(void)
{
	ft_printstr("işlem kimliği --> ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, sig_usr);
	signal(SIGUSR2, sig_usr);
	while (1)
	{
		pause();
	}
	return (0);
}
