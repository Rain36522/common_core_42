
#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string	&Warlock::getName(void) const
{
	return name;
}

const std::string	&Warlock::getTitle(void) const
{
	return title;
}

void	Warlock::setTitle(std::string const &Title)
{
	title = Title;
}

void	Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

Warlock::Warlock(void) {}

Warlock::Warlock(const Warlock &src)
{
	*this = src;
}

Warlock	&Warlock::operator=(const Warlock &src)
{
	name = src.getName();
	title = src.getTitle();
	return *this;
}