/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:53:33 by pudry             #+#    #+#             */
/*   Updated: 2023/06/28 12:46:09 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

typedef struct max_sq
{
	int	posl;
	int	posc;
	int	size;
}	t_max_sq;

typedef struct map
{
	char	v;
	char	o;
	char	p;
	char	**a;
}	t_v_dictio;
#endif
