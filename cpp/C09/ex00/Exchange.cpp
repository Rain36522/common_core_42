#include "Exchange.hpp"

double		Exchange::getChange(std::string date) const
{
	auto	it = _dataMap.begin();

	while (it != _dataMap.end())
	{
		if (date.compare(it->first) < 0)
		{
			if (it != _dataMap.begin())
				it --;
			return (it->second);
		}
	}
}

std::string	Exchange::getLastDate(void) const
{
	auto it = _dataMap.end();

	return (it->first);
}

Exchange	&Exchange::operator=(const Exchange &src)
{
	this->_dataMap = src._dataMap;
	return (*this);
}

Exchange::Exchange(const Exchange &src)
{
	*this = src;
}

Exchange::~Exchange(void){}

Exchange::Exchange(std::string dataFile)
{
	std::ifstream	file;
	std::string		tmp;
	std::string		date;
	std::string		change;
	int				isepar;

	file.open(dataFile);
	if (file.fail())
		throw std::ifstream::failure("Error opening data file");
	while (getline(file, tmp))
	{
		isepar = tmp.find(",");
		change = tmp.substr(isepar + 1, tmp.size() - isepar);
		date = tmp.substr(0, isepar);
		_dataMap[date] = std::stod(change);
	}
}
