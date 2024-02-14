/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:30:05 by pudry             #+#    #+#             */
/*   Updated: 2024/02/12 11:11:08 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T> bool	ft_easyfind(T contains, int n)
{
	for (int i = 0; i <= contains.size(); i ++)
	{
		if (contains[i] == n)
			return (true);
	}
	return (false);
}