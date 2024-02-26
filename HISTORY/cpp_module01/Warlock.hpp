
#ifndef WARLOCK__HPP
# define WARLOCK__ HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);
		const std::string	&getName(void) const;
		const std::string	&getTitle(void) const;
		void		setTitle(std::string const  &Title);
		void		introduce(void) const;
		void		learnSpell(ASpell *spell);
		void		forgetSpell(std::string spell);
		void		launchSpell(std::string spell, const ATarget &target);

	private:
		std::string	name;
		std::string	title;
		std::vector<ASpell *>	v;

		Warlock(void);
		Warlock(const Warlock &src);
		Warlock	&operator=(const Warlock &src);
};

#endif