
#ifndef TARGETGENERATOR__HPP
# define TARGETGENERATOR__ HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator(void);
		~TargetGenerator(void);
		void		learnTargetType(ATarget *spell);
		void		forgetTargetType(std::string const &spell);
		ATarget		*createTarget(std::string const &spell);

	private:
		std::vector<ATarget *>	v;
		TargetGenerator(const TargetGenerator &src);
		TargetGenerator	&operator=(const TargetGenerator &src);
};

#endif