#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <list>
#include <iostream>

class Data
{
	public:
		Data(int year, int month, int day, float amount);
		Data(const Data& data);
		Data& operator=(const Data& data);
		~Data(void);	
		int getYear(void) const;
		int getMonth(void) const;
		int getDay(void) const;
		float getAmount(void) const;

	private:
		Data(void);
		int _year;
		int _month;
		int _day;
		float _amount;
};

#endif
