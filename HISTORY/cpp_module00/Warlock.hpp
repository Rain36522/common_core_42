
#ifndef WARLOCK__HPP
# define WARLOCK__ HPP

# include <iostream>

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);
		const std::string	&getName(void) const;
		const std::string	&getTitle(void) const;
		void		setTitle(std::string const  &Title);
		void		introduce(void) const;

	private:
		std::string	name;
		std::string	title;

		Warlock(void);
		Warlock(const Warlock &src);
		Warlock	&operator=(const Warlock &src);
};

#endif