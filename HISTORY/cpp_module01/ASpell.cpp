
#include "ASpell.hpp"

ASpell::ASpell(void) : name(""), effects("") {}

ASpell::ASpell(std::string const &name, std::string const &effect) : name(name), effects(effect) {}

ASpell::ASpell(const ASpell &src)
{
	*this = src;
}

ASpell	&ASpell::operator=(const ASpell &src)
{
	name = src.getName();
	effects = src.getEffects();
	return *this;
}

ASpell::~ASpell(void) {}

const std::string	&ASpell::getName(void) const
{
	return name;
}

const std::string	&ASpell::getEffects(void) const
{
	return effects;
}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}