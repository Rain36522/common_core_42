/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:58:05 by pudry             #+#    #+#             */
/*   Updated: 2023/11/02 19:07:20 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SO_LONG_H
# define FT_SO_LONG_H

# include "../mlx/mlx.h"
# include <math.h>
# include "../libft/libft.h"
# include "../printf/ft_printf.h"

typedef struct s_map {
	char	**map;
	int		xplayer;
	int		yplayer;
	int		xmap;
	int		ymap;
}	t_map;

typedef struct s_data {
	void	*mlx;
	void	*mlx_win;
	t_map	*map;
	char	mv;
	char	mv2;
}	t_data;

/*Check de la map*/
int		ft_check_map(char *path);
t_map	*ft_give_map(char *path);
int		ft_free_line(char *line, char *line2, int i, int fd);
int		ft_check_line(char *old_line, char *line, int isize, int fd);
int		ft_check_char(char *line);
int		ft_possibl(t_data *data);
int		ft_free_map(char **map2);
int		ft_free_impossible(t_data *data, char **map2);

/*initialise map*/
void	ft_put_background(t_data *data);
void	ft_put_object(t_data *data);
void	ft_set_player(t_data *data);

/*Utils*/
void	ft_put_image(t_data *data, char *path, int i, int j);
int		ft_quit(t_data *data, int j, int icnt);
int		ft_press_cross(t_data *data);
void	ft_put_img_by_char(t_data *data, char c, int i, int j);
void	ft_move__offset(t_data *data, int of_x, int of_y);
int		ft_check_flag(t_data *data);
void	ft_put_cnt_text(t_data *data, int i);
int		ft_move_l(t_data *data, int i, int icnt);
int		ft_move_r(t_data *data, int i, int icnt);
int		ft_move_u(t_data *data, int i, int icnt);
int		ft_move_d(t_data *data, int i, int icnt);

#endif