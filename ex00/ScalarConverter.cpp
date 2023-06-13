#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(std::string input) : _input(input){}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &other)
{
	if (this != &other)
	{
		this->_char = other._char;
		this->_int = other._int;
		this->_float = other._float;
		this->_double = other._double;
		this->_isChar = other._isChar;
		this->_isInt = other._isInt;
		this->_isFloat = other._isFloat;
		this->_isDouble = other._isDouble;
		this->_isImpossible = other._isImpossible;
		this->_isNan = other._isNan;
		this->_isInf = other._isInf;
		this->_isMinusInf = other._isMinusInf;
		this->_isPlusInf = other._isPlusInf;
	}
	return (*this);
}

