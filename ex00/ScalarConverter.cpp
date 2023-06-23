#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const & copy)
{
	_input = copy._input;
	_char = copy._char;
	_int = copy._int;
	_float = copy._float;
	_double = copy._double;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & other)
{
	if (this != &other)
	{
		_input = other._input;
		_char = other._char;
		_int = other._int;
		_float = other._float;
		_double = other._double;
	}
	return (*this);
}

void	ScalarConverter::convert(std::string loco)
{
	ScalarConverter	zoro;

	if (loco == "-inff" || loco == "-inf")
	{
		std::cout << "char: impossible"<< std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	else if (loco == "+inff" || loco == "+inf")
	{
		std::cout << "char: impossible"<< std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	else if (loco == "nanf" || loco == "nan")
	{
		std::cout << "char: impossible"<< std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (loco.length() == 1 && !std::isdigit(loco[0]))
	{
		zoro._char = loco[0];
		zoro._int = static_cast<int>(zoro._char);
		zoro._float = static_cast<float>(zoro._char);
		zoro._double = static_cast<double>(zoro._char);
		std::cout << "char: " << zoro._char << std::endl;
		std::cout << "int: " << zoro._int << std::endl;
		std::cout << "float: " << zoro._float << ".0f" << std::endl;
		std::cout << "double: " << zoro._double << ".0" << std::endl;
		return ;
	}
	else if (loco.find('.') != std::string::npos)
	{
		if (loco.find('f') != std::string::npos)
		{
			for (long unsigned int i = 0; i < loco.length(); i++)
			{
				if (!std::isdigit(loco[i]) && loco[i] != '.' && loco[i] != 'f')
				{
					std::cout << "char: impossible"<< std::endl;
					std::cout << "int: impossible" << std::endl;
					std::cout << "float: impossible" << std::endl;
					std::cout << "double: impossible" << std::endl;
					return ;
				}
			}
			std::istringstream(loco) >> zoro._float;
			zoro._char = static_cast<char>(zoro._float);
			if (std::iscntrl(zoro._char))
				std::cout << "char: non diplayable" << std::endl;
			else
				std::cout << "char: " << zoro._char << std::endl;
			zoro._int = static_cast<int>(zoro._float);
			zoro._double = static_cast<double>(zoro._float);
			std::cout << "int: " << zoro._int << std::endl;
			std::cout << std::fixed << std::setprecision(loco.length() - loco.find('.') - 2) << "float: " << zoro._float << "f" << std::endl;
			std::cout << "double: " << zoro._double << std::endl;
		}
		else
		{
			for (long unsigned int i = 0; i < loco.length(); i++)
			{
				if (!std::isdigit(loco[i]) && loco[i] != '.')
				{
					std::cout << "char: impossible"<< std::endl;
					std::cout << "int: impossible" << std::endl;
					std::cout << "float: impossible" << std::endl;
					std::cout << "double: impossible" << std::endl;
					return ;
				}
			}
			std::istringstream(loco) >> zoro._double;
			zoro._char = static_cast<char>(zoro._double);
			if (std::iscntrl(zoro._char))
				std::cout << "char: non diplayable" << std::endl;
			else
				std::cout << "char: " << zoro._char << std::endl;
			zoro._int = static_cast<int>(zoro._double);
			zoro._float = static_cast<float>(zoro._double);
			std::cout << "int: " << zoro._int << std::endl;
			std::cout << std::fixed << std::setprecision(loco.length() - loco.find('.') - 1) << "float: " << zoro._float << "f" << std::endl;
			std::cout << "double: " << zoro._double << std::endl;
		}
	}
	else
	{
		for (long unsigned int i = 0; i < loco.length(); i++)
		{
			if (!std::isdigit(loco[i]))
			{
				std::cout << "char: impossible"<< std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: impossible" << std::endl;
				std::cout << "double: impossible" << std::endl;
				return ;
			}
		}
		std::istringstream(loco) >> zoro._int;
		zoro._char = static_cast<char>(zoro._int);
		if (std::iscntrl(zoro._char))
			std::cout << "char: non diplayable" << std::endl;
		else
			std::cout << "char: " << zoro._char << std::endl;
		zoro._float = static_cast<float>(zoro._int);
		zoro._double = static_cast<double>(zoro._int);
		std::cout << "int: " << zoro._int << std::endl;
		std::cout << "float: " << zoro._float << ".0f" << std::endl;
		std::cout << "double: " << zoro._double << ".0" << std::endl;
	}
}


ScalarConverter::~ScalarConverter() {}