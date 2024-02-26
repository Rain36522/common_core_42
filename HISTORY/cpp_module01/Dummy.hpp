
#ifndef Dummy__HPP
# define Dummy__HPP

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy(void);
		virtual ~Dummy(void);
		virtual ATarget	*clone(void) const;
	};

#endif