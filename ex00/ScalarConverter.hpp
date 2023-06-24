#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib> // for atof
#include <limits>
#include <cmath>
#include <cfloat>

class ScalarConverter
{
	private:
		std::string _input;
		char _char;
		int _int;
		float _float;
		double _double;
		long double tester;
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter& operator=(ScalarConverter const &other);

		static void	convert(std::string loco);

		~ScalarConverter();
};

#endif