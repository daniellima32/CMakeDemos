#include "../include/Message.h"

Message::Message()
{
	cout << "Sem parametros" << endl;
}

Message::Message(int var)
{
	cout << "Inteiro: " << var << endl;
}

Message::Message(std::string var)
{
	std::cout << "String: " << var << endl;
}