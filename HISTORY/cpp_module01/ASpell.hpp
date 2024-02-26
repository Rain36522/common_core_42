
#ifndef ASPELL__HPP
# define ASPELL__HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell(void);
		ASpell(std::string const &name, std::string const &effect);
		ASpell(const ASpell &src);
		ASpell	&operator=(const ASpell &src);
		virtual ~ASpell(void);
		const std::string	&getName(void) const;
		const std::string	&getEffects(void) const;
		virtual ASpell		*clone(void) const = 0;
		void				launch(const ATarget &target) const;

	protected:
		std::string	name;
		std::string	effects;
};

#endif