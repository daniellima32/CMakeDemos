#include "../../include/subdir/Message2.h"

Message2::Message2()
{
	cout << "Sem parametros 2" << endl;
}

Message2::Message2(int var)
{
	cout << "Inteiro 2: " << var << endl;
}

Message2::Message2(std::string var)
{
	std::cout << "String 2: " << var << endl;
}