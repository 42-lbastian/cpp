#include "BitcoinExchange.hpp"

Data::Data(int year, int month, int day, float amount):_year(year),
			_month(month), _day(day), _amount(amount)
{
}

Data::~Data(void)
{
}

Data::Data(const Data& data)
{
	(*this) = data;
}

Data& Data::operator=(const Data& data)
{
	this->_year = data._year;
	this->_month = data._month;
	this->_day = data._day;
	this->_amount = data._amount;
	return (*this);
}

int Data::getYear(void) const
{
	return (this->_year);
}

int Data::getMonth(void) const
{
	return (this->_month);
}

int Data::getDay(void) const
{
	return (this->_day);
}

float Data::getAmount(void) const
{
	return (this->_amount);
}
