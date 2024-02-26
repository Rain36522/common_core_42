
#ifndef ATARGET__HPP
# define ATARGET__HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget(std::string const &type);
		virtual ~ATarget(void);
		const std::string		&getType(void) const;
		void					getHitBySpell(const ASpell &spell) const;
		virtual ATarget			*clone(void) const = 0;

	protected:
		std::string	type;
				ATarget(void);
		ATarget(const ATarget &src);
		ATarget	&operator=(const ATarget &src);

};

#endif