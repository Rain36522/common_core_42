
#ifndef FWOOSH__HPP
# define FWOOSH__HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		virtual ~Fwoosh(void);
		virtual ASpell	*clone(void) const;
};

#endif