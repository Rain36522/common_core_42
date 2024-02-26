
#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator(void) {}

TargetGenerator::TargetGenerator(void) {}

TargetGenerator::TargetGenerator(const TargetGenerator &src)
{
	*this = src;
}

TargetGenerator	&TargetGenerator::operator=(const TargetGenerator &src)
{
	(void) src;
	return *this;
}

void	TargetGenerator::learnTargetType(ATarget *spell)
{
	v.push_back(spell);
}

void	TargetGenerator::forgetTargetType(std::string const &spell)
{
	
	for (std::vector<ATarget *>::iterator i = v.begin(); i != v.end(); i ++)
	{
		if ((*i)->getType() == spell)
		{
			v.erase(i);
			return ;
		}
	}
}

ATarget	*TargetGenerator::createTarget(std::string const &spell)
{
	for (size_t i = 0; i < v.size(); i ++)
	{
		if (v[i]->getType() == spell)
		{
			return (v[i])->clone();
		}
	}
	return 0;
}