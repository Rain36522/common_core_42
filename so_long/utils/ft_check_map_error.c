/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:51:31 by pudry             #+#    #+#             */
/*   Updated: 2023/11/03 09:27:43 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_so_long.h"

int	ft_free_map(char **map2)
{
	int	i;

	i = 0;
	while (map2[i])
	{
		free(map2[i]);
		i ++;
	}
	free(map2);
	return (1);
}

int	ft_free_impossible(t_data *data, char **map2)
{
	ft_free_map(map2);
	ft_free_map(data->map->map);
	free(data->map);
	free(data);
	ft_printf("Error\nLa mape est impossible\n");
	exit(0);
}
