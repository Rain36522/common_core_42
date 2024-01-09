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
	std::string		tmp;

	infile.open(file);
	if (infile.fail())
	{
		std::cout << "Error read file \n";
		exit(0);
	}
	outfile.open(file + ".replace");
	if (outfile.fail())
	{
		infile.close();
		std::cout << "Error generate output file \n";
		exit(0);
	}
	while (getline(infile, tmp))
		outfile << ft_replace(str, tmp, snew) << std::endl;
	outfile.close();
	infile.close();
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