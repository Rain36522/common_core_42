/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:27:08 by pudry             #+#    #+#             */
/*   Updated: 2024/01/08 11:27:08 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	ft_replace(std::string ocur, std::string txt, std::string snew)
{
	int	ipos;
	int	ilen;

	ilen = ocur.length();
	ipos = txt.find(ocur);
	while (ipos != std::string::npos)
	{
		std::cout << "loop " << ipos << " " << ilen << std::endl;
		if (ipos != txt.find(snew))
		{
			txt = txt.erase(ipos, ilen);
			txt.insert(ipos, snew);
		}
		ipos = txt.find(ocur, ipos + 1);
	}
	return (txt);
}

void	ft_new_file(std::string file, std::string str, std::string snew)
{
	std::ofstream	outfile;
	std::ifstream	infile;

	infile.open(file);
	if (infile.fail())
	{
		std::cout << "Error read file \n";
		exit(0);
	}
	outfile
}



int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid argument quantity\n";
		return (0);
	}
	ft_new_file(argv[1], argv[2], argv[3]);
	return (0);
}