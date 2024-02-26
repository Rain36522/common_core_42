
#ifndef FIREBALL__HPP
# define FIREBALL__HPP

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball(void);
		virtual ~Fireball(void);
		virtual ASpell	*clone(void) const;
};

#endif