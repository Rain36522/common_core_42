
#ifndef BRICKWALL__HPP
# define BRICKWALL__HPP

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall(void);
		virtual ~BrickWall(void);
		virtual ATarget	*clone(void) const;
	};

#endif