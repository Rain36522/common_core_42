/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:35:56 by pudry             #+#    #+#             */
/*   Updated: 2024/01/17 16:35:56 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

void	ShrubberyCreationForm::execute(const Bureaucrate src)
{
	std::ofstream	outfile;

	if (src.getGrade() > this->_gradeExe)
		throw (ShrubberyCreationForm::GradeTooLowException());
	else if (!this->getSign())
		throw(ShrubberyCreationForm::FormNotSign());
	outfile.open(this->_name + "_shrubbery");
	if (outfile.fail())
	{
		throw(ShrubberyCreationForm::ErrorFile());
	}
	std::cout << src.getName() << " as execute form : " << this->_name << std::endl;
	outfile << "               ,@@@@@@@," << std::endl;
	outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	outfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	outfile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	outfile << "       |o|        | |         | |" << std::endl;
	outfile << "       |.|        | |         | |" << std::endl;
	outfile << "    \\\\/ ._\\/_/__/  ,\\_//__\\\\/.  \\_//__/" << std::endl;

	outfile.close();

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	*this = src;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {}


ShrubberyCreationForm::~ShrubberyCreationForm(void) {};

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137) {}