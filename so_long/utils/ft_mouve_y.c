/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouve_y.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:54:33 by pudry             #+#    #+#             */
/*   Updated: 2023/11/02 19:13:22 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_so_long.h"

static void	ft_change_u(t_data *data, int x, int y, int i)
{
	char	c;

	if (data->map->map[y][x] == 'C')
		data->map->map[y][x] = 'F';
	c = data->map->map[data->map->yplayer][data->map->xplayer];
	ft_put_img_by_char(data, c, data->map->xplayer, data->map->yplayer);
	c = data->map->map[data->map->yplayer - 1][data->map->xplayer];
	ft_put_img_by_char(data, c, data->map->xplayer, data->map->yplayer - 1);
	ft_move__offset(data, 0, i * -1);
	if (i >= 64)
		data->map->yplayer --;
}

int	ft_move_u(t_data *data, int i, int icnt)
{
	int		x;
	int		y;

	x = data->map->xplayer;
	y = data->map->yplayer;
	if (ft_strchr("0CF", data->map->map[y - 1][x]))
	{
		ft_change_u(data, x, y, i);
		icnt ++;
	}
	if (data->map->map[y - 1][x] == 'E')
	{
		if (ft_check_flag(data) == 1)
		{
			ft_change_u(data, x, y, i);
			if (i >= 64)
				ft_quit(data, 2, ++ icnt);
		}
	}
	return (icnt);
}

static void	ft_change_d(t_data *data, int x, int y, int i)
{
	char	c;

	if (data->map->map[y][x] == 'C')
		data->map->map[y][x] = 'F';
	c = data->map->map[data->map->yplayer][data->map->xplayer];
	ft_put_img_by_char(data, c, data->map->xplayer, data->map->yplayer);
	c = data->map->map[data->map->yplayer + 1][data->map->xplayer];
	ft_put_img_by_char(data, c, data->map->xplayer, data->map->yplayer + 1);
	ft_move__offset(data, 0, i);
	if (i >= 64)
		data->map->yplayer ++;
}

int	ft_move_d(t_data *data, int i, int icnt)
{
	int		x;
	int		y;

	x = data->map->xplayer;
	y = data->map->yplayer;
	if (ft_strchr("0CF", data->map->map[y + 1][x]))
	{
		ft_change_d(data, x, y, i);
		icnt ++;
	}
	if (data->map->map[y + 1][x] == 'E')
	{
		if (ft_check_flag(data) == 1)
		{
			ft_change_d(data, x, y, i);
			if (i >= 64)
				ft_quit(data, 2, ++ icnt);
		}
	}
	return (icnt);
}
