#include "ChicagoCheesePizza.h"


ChicagoCheesePizza::ChicagoCheesePizza(){ }

void ChicagoCheesePizza::prepare()
{
	cout << "시카고 치즈피자 준비 중" << endl;
}

void ChicagoCheesePizza::bake()
{
	cout << "시카고 치즈피자 굽는 중" << endl;
}

void ChicagoCheesePizza::cut()
{
	cout << "시카고 치즈피자 자르는 중" << endl;
}

void ChicagoCheesePizza::box()
{
	cout << "시카고 치즈피자 포장 중" << endl;
}

string ChicagoCheesePizza::toString() {
	return string("시카고 치즈피자");
}