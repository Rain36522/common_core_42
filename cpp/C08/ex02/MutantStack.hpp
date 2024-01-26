#ifndef __MUTANTSTACK__HPP
# define __MUTANTSTACK__HPP

# include <iostream>
# include <stack>


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack()  {}
		~MutantStack() {}
		MutantStack(const MutantStack &other) : std::stack<T, Container>(other)
		{
			*this = other;
		}


		MutantStack	&operator=(const MutantStack &other)
		{
			if (*this == &other)
				return (*this);
			else
			{
				this->std::stack<T, Container>::operator=(other);
				return (*this);
			}
		}

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

		// iterator
		iterator	begin() 
		{
			return (this->std::stack<T, Container>::c.begin());
		}
		iterator	end() 
		{
			return (this->std::stack<T, Container>::c.end());
		}
		// reverse iterator
		iterator	rbegin() 
		{
			return (this->std::stack<T, Container>::c.rbegin());
		}
		iterator	rend() 
		{
			return (this->std::stack<T, Container>::c.rend());
		}
		// const iterator
		iterator	begin() const
		{
			return (this->std::stack<T, Container>::c.begin());
		}
		iterator	end() const
		{
			return (this->std::stack<T, Container>::c.end());
		}
		// const reverse iterator
		iterator	rbegin() const
		{
			return (this->std::stack<T, Container>::c.rbegin());
		}
		iterator	rend() const
		{
			return (this->std::stack<T, Container>::c.rend());
		}
};

#endif
