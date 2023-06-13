#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
	private:
		std::string _input;
		char _char;
		int _int;
		float _float;
		double _double;
		bool _isChar;
		bool _isInt;
		bool _isFloat;
		bool _isDouble;
		bool _isImpossible;
		bool _isNan;
		bool _isInf;
		bool _isMinusInf;
		bool _isPlusInf;
	public:
		ScalarConverter();
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter& operator=(ScalarConverter const &other);

		static void	convert();

		~ScalarConverter();
};

#endif