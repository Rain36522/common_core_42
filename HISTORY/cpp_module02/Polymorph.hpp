
#ifndef POLYMORPH__HPP
# define POLYMORPH__HPP

#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph(void);
		virtual ~Polymorph(void);
		virtual ASpell	*clone(void) const;
};

#endif