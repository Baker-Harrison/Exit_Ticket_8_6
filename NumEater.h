//
// Created by Harrison Baker on 8/6/24.
//

#ifndef EXIT_TICKET_8_6_NUMEATER_H
#define EXIT_TICKET_8_6_NUMEATER_H

#include <iostream>

template <class T>
class NumEater
{
private:
	T sum;
public:
	NumEater() : sum(0) {}
	void eat(T num)
	{
		std::cout << "nom-nom" << std::endl;
		sum += num;
	}
	T burp()
	{
		return sum;
	}
};

#endif //EXIT_TICKET_8_6_NUMEATER_H
