#include "ChicagoVeggiPizza.h"


ChicagoVeggiPizza::ChicagoVeggiPizza() { }

void ChicagoVeggiPizza::prepare()
{
	cout << "시카고 야채피자 준비 중" << endl;
}

void ChicagoVeggiPizza::bake()
{
	cout << "시카고 야채피자 굽는 중" << endl;
}

void ChicagoVeggiPizza::cut()
{
	cout << "시카고 야채피자 자르는 중" << endl;
}

void ChicagoVeggiPizza::box()
{
	cout << "시카고 야채피자 포장 중" << endl;
}

string ChicagoVeggiPizza::toString() {
	return string("시카고 야채피자");
}