/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_serv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:33:36 by pudry             #+#    #+#             */
/*   Updated: 2023/11/06 15:46:55 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/minitalk.h"

void sig_handler_usr(int signum)
{
	static char	*s_bin;
	static int	ibit;
	
	if (!s_bin || !ibit)
	{
		s_bin = (char *) malloc(sizeof(char) * 9);
		if (!s_bin)
			exit(0);
		s_bin[8] = '\0';
		ibit = 0;
	}
	if (signum == 30)
		s_bin[ibit] = '0';
	else
		s_bin[ibit] = '1';
	ibit ++;
	if (ibit >= 8)
	{
		ibit = 0;
		ft_printf("%s\n", s_bin);
		free(s_bin);
	}
}


int main(){
	pid_t pid;
	signal(SIGUSR1, sig_handler_usr);
	signal(SIGUSR2, sig_handler_usr);
	pid=getpid();
	ft_printf("pid : %i\n", pid);
	while (1)
		usleep(30);
	return 0;
}