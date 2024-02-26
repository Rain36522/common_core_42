
#ifndef SPELLBOOK__HPP
# define SPELLBOOK__HPP

#include <iostream>
#include "ASpell.hpp"
#include <vector>

class ASpell;

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const &spell);
		ASpell	*createSpell(std::string const &spell);
	
	private:
		std::vector<ASpell *>	v;
		SpellBook	&operator=(const SpellBook &src);
		SpellBook(const SpellBook &src);

};

#endif