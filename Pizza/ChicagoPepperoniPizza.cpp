#include "ChicagoPepperoniPizza.h"


ChicagoPepperoniPizza::ChicagoPepperoniPizza() { }

void ChicagoPepperoniPizza::prepare()
{
	cout << "시카고 페퍼로니피자 준비 중" << endl;
}

void ChicagoPepperoniPizza::bake()
{
	cout << "시카고 페퍼로니피자 굽는 중" << endl;
}

void ChicagoPepperoniPizza::cut()
{
	cout << "시카고 페퍼로니피자 자르는 중" << endl;
}

void ChicagoPepperoniPizza::box()
{
	cout << "시카고 페퍼로니피자 포장 중" << endl;
}

string ChicagoPepperoniPizza::toString() {
	return string("시카고 페퍼로니피자");
}