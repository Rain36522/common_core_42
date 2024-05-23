/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:46:31 by pudry             #+#    #+#             */
/*   Updated: 2024/01/18 09:57:30 by pudry            ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

void	RobotomyRequestForm::execute(const Bureaucrate src)
{
	int	i;

	if (src.getGrade() > this->_gradeExe)
		throw (RobotomyRequestForm::GradeTooLowException());
	else if (!this->getSign())
		throw(RobotomyRequestForm::FormNotSign());
	std::cout << src.getName() << " as execute form : " << this->_name << std::endl;
	std::cout << std::endl <<"                       ██████████████████████                        " << std::endl;
	std::cout << "                    ██████ ███          ███ ██████                    " << std::endl;
	std::cout << "    ██████████████████████ ███          ███ ██████████████████████    " << std::endl;
	std::cout << "  ████████████████████ ███ ███          ███ ███ ████████████████████  " << std::endl;
	std::cout << "  ███              ███ ███ ███          ███ ███ ███              ███  " << std::endl;
	std::cout << "   ███████████████████ ███ ███          ███ ███ ███████████████████   " << std::endl;
	std::cout << "                   ███████ ████████████████ ███████                   " << std::endl;
	std::cout << "                       ███   ████████████   ███                       " << std::endl;
	std::cout << "                        ███                ███                        " << std::endl;
	std::cout << "                         ███              ███                         " << std::endl;
	std::cout << "                          ███            ███                          " << std::endl;
	std::cout << "                           ███          ███                           " << std::endl;
	std::cout << "                           ███          ███                           " << std::endl;
	std::cout << "                           ███          ███                           " << std::endl;
	std::cout << "                           ████████████████                           " << std::endl;
	std::cout << "                           ████████████████                           " << std::endl;
	std::cout << "                   █       ███    ██    ███       █                   " << std::endl;
	std::cout << "                  █    █   ███    ██    ███   █    █                  " << std::endl;
	std::cout << "                  █   █    ███    ██    ███    █   █                  " << std::endl;
	std::cout << "                  █    █   ███    ██    ███   █    █                  " << std::endl;
	std::cout << "                   █       ███    ██    ███       █                   " << std::endl;
	std::cout << "                           ███    ██    ███                           " << std::endl;
	std::cout << "                           ███    ██    ███                           " << std::endl;
	std::cout << "                           ███    ██    ███                           " << std::endl;
	std::cout << "                            ██████████████                            " << std::endl;
	std::cout << "                             ████████████                             " << std::endl;
	std::cout << "                               ███  ███                               " << std::endl;
	std::cout << "                               ███  ███                               " << std::endl;
	std::cout << "                               ███  ███                               " << std::endl;
	std::cout << "                               ███  ███                               " << std::endl;
	std::cout << "                               ███  ███                               " << std::endl;
	std::cout << "                        ██     ███  ███     ██                        " << std::endl;
	std::cout << "                   ███  ████   ███  ███   ████  ███                   " << std::endl;
	std::cout << "                    ████  ███  ███  ███  ███  ████                    " << std::endl;
	std::cout << "                      ███      ████████      ███                      " << std::endl;
	std::cout << "                                ██████                                " << std::endl;
	std::cout << "            ██████████████████████████████████████████                " << std::endl;
	std::cout << std::endl << std::endl;
	std::srand(std::time(nullptr));
	i = std::rand() % 2;
	if (i)
		std::cout << "\e[1;32mRobotomy success!!\e[0m" << std::endl << std::endl;
	else
		std::cout << "\e[1;31mRobotomy fail.\e[0m\n\n";
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	*this = src;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {}


RobotomyRequestForm::~RobotomyRequestForm(void) {};

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45) {}