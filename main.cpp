#include <iostream>
#include "NumEater.h"


using namespace std;

template <class Type>
Type cube_it(Type num);

int main() {

	auto integer = cube_it(5);
	auto doubles = cube_it(5.55);

	cout << integer << endl;
	cout << doubles << endl;


	NumEater<int> eater1;
	NumEater<double> eater2;

	double numList[5] = {5.9, 8.9, 3.4, 9.9, 5.6};

	for (auto &num : numList) {
		eater1.eat(num);
		eater2.eat(num);
		cout << endl;
	}

	cout << "Eater1: " <<  eater1.burp() << endl;
	cout << "Eater2: " <<  eater2.burp() << endl;




	return 0;
}

template <class Type>
Type cube_it(Type num)
{
	return num * num * num;
}
