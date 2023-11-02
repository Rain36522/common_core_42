/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouve_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:54:33 by pudry             #+#    #+#             */
/*   Updated: 2023/11/02 19:20:29 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_so_long.h"

static void	ft_change_l(t_data *data, int x, int y, int i)
{
	char	c;

	if (data->map->map[y][x] == 'C')
		data->map->map[y][x] = 'F';
	c = data->map->map[data->map->yplayer][data->map->xplayer];
	ft_put_img_by_char(data, c, data->map->xplayer, data->map->yplayer);
	c = data->map->map[data->map->yplayer][data->map->xplayer - 1];
	ft_put_img_by_char(data, c, data->map->xplayer - 1, data->map->yplayer);
	ft_move__offset(data, i * -1, 0);
	if (i >= 64)
		data->map->xplayer --;
}

int	ft_move_l(t_data *data, int i, int icnt)
{
	int		x;
	int		y;

	x = data->map->xplayer;
	y = data->map->yplayer;
	if (ft_strchr("0CF", data->map->map[y][x - 1]))
	{
		ft_change_l(data, x, y, i);
		icnt ++;
	}
	if (data->map->map[y][x - 1] == 'E')
	{
		if (ft_check_flag(data) == 1)
		{
			ft_change_l(data, x, y, i);
			if (i >= 64)
				ft_quit(data, 2, ++ icnt);
		}
	}
	return (icnt);
}

static void	ft_change_r(t_data *data, int x, int y, int i)
{
	char	c;

	if (data->map->map[y][x] == 'C')
		data->map->map[y][x] = 'F';
	c = data->map->map[data->map->yplayer][data->map->xplayer];
	ft_put_img_by_char(data, c, data->map->xplayer, data->map->yplayer);
	c = data->map->map[data->map->yplayer][data->map->xplayer + 1];
	ft_put_img_by_char(data, c, data->map->xplayer + 1, data->map->yplayer);
	ft_move__offset(data, i, 0);
	if (i >= 64)
		data->map->xplayer ++;
}

int	ft_move_r(t_data *data, int i, int icnt)
{
	int		x;
	int		y;

	x = data->map->xplayer;
	y = data->map->yplayer;
	if (ft_strchr("0CF", data->map->map[y][x + 1]))
	{
		ft_change_r(data, x, y, i);
		icnt ++;
	}
	if (data->map->map[y][x + 1] == 'E')
	{
		if (ft_check_flag(data) == 1)
		{
			ft_change_r(data, x, y, i);
			if (i >= 64)
				ft_quit(data, 2, ++ icnt);
		}
	}
	return (icnt);
}
