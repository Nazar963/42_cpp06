#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	Data*		loco;
	uintptr_t	zoro;

	loco = new Data;
	zoro = Serializer::serialize(loco);
	std::cout << "loco pointer is: " << loco << std::endl;
	std::cout << "zoro number is: " << zoro << std::endl;
	std::cout << "zoro back to loco is: " << Serializer::deserialize(zoro) << std::endl;
	delete loco;
	return (0);
}