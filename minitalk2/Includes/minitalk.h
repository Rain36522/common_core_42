/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:40:46 by pudry             #+#    #+#             */
/*   Updated: 2023/11/06 20:40:46 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include "../libft/libft.h"
# include <stdio.h>

char	*ft_char_to_bin(unsigned int chr, char *c);
char 	ft_bin_to_int(char *s);

#endif