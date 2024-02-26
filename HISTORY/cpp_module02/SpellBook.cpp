
#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void)
{
	for (size_t i = 0; i < v.size(); i ++)
		delete v[i];
}

void	SpellBook::learnSpell(ASpell *spell)
{
	v.push_back(spell->clone());
}

void	SpellBook::forgetSpell(std::string const &spell)
{
	for (std::vector<ASpell *>::iterator it = v.begin(); it != v.end(); it ++)
	{
		if ((*it)->getName() == spell)
		{
			delete (*it);
			v.erase(it);			
		}
	}
}

ASpell	*SpellBook::createSpell(std::string const &src)
{
	for (std::vector<ASpell *>::iterator it = v.begin(); it != v.end(); it ++)
	{
		if ((*it)->getName() == src)
		{
			return (*it)->clone();
		}
	}
	return 0;
}