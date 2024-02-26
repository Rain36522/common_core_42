
#include "ATarget.hpp"

ATarget::ATarget(void) : type("") {}

ATarget::ATarget(std::string const &type) : type(type) {}

ATarget::ATarget(const ATarget &src)
{
	*this = src;
}

ATarget	&ATarget::operator=(const ATarget &src)
{
	type = src.getType();
	return *this;
}

ATarget::~ATarget(void) {}

const std::string	&ATarget::getType(void) const
{
	return type;
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!\n";
}
