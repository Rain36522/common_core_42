/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_serv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:08:08 by pudry             #+#    #+#             */
/*   Updated: 2023/11/06 21:08:08 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/minitalk.h"

void	ft_send_msg(char *c, pid_t pid)
{
	int	i;

	i = 0;
	while (i < 8 && c[i])
	{
		if (c[i] == '0')
		{
			kill(pid,SIGUSR1);
			printf("0");
		}
		else
		{
			kill(pid,SIGUSR2);
			printf("1");
		}
		i ++;
		usleep(100);
	};
	printf("\n");
}

void	ft_send_str(char *str, pid_t pid)
{
	int		i;
	char	*c;

	i = 0;
	c = (char *) malloc(sizeof(char) * 9);
	if (!c)
		return ;
	c[8] = '\0';
	printf("41\n");
	while (str[i])
	{
		c = ft_char_to_bin((unsigned int)str[i], c);
		printf("bin : %s\n", c);
		ft_send_msg(c, pid);
		i ++;
	}
	free(c);
	//ft_send_msg("00000000", pid);
}


int main(int argc, char **argv)
{
	pid_t pid;

	pid = ft_atoi(argv[1]);
	ft_send_str(argv[2], pid);
	return 0;
}