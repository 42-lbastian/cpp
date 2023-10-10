#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <list>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <limits.h>
#define DATABASE "data.csv"

class Data
{
	public:
		Data(int year, int month, int day, double amount);
		Data(const Data& data);
		Data& operator=(const Data& data);
		~Data(void);	
		int getYear(void) const;
		int getMonth(void) const;
		int getDay(void) const;
		double getAmount(void) const;
		void print(void) const;

	private:
		Data(void);
		int _year;
		int _month;
		int _day;
		double _amount;
};

#endif
