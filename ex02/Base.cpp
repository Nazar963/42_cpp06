#include "Base.hpp"

Base*	generate(void)
{
	int		rand;

	rand = std::rand() % 4;
	if (rand == 0)
		return (new A);
	else if (rand == 1)
		return (new B);
	else if (rand == 2)
		return (new C);
	else
		return (new Base);
}

void	identify(Base* p)
{
	A* a = NULL;
	B* b = NULL;
	C* c = NULL;

	if ((a = dynamic_cast<A*>(p)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B*>(p)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C*>(p)))
		std::cout << "C" << std::endl;
	else
		std::cout << "no pointer to any type found" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
			std::cout << "A" << std::endl;
		a = a;
	}
	catch (std::exception& e)
	{
		try
		{
			B&	b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			b = b;
		}
		catch (std::exception& e)
		{
			try
			{
				C&	c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
				c = c;
			}
			catch (std::exception& e)
			{
				std::cout << "no reference to any type found" << e.what() << std::endl;
			}
		}
	}
}