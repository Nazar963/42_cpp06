#include "Base.hpp"

int main(void)
{
	Base*	loco;

	srand(time(NULL)); 
	loco = generate();
	identify(*loco);
	identify(loco);
	delete loco;
	return (0);
}