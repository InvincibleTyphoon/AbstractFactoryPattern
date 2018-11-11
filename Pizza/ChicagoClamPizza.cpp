#include "ChicagoClamPizza.h"


ChicagoClamPizza::ChicagoClamPizza() { }

void ChicagoClamPizza::prepare()
{
	cout << "시카고 조개피자 준비 중" << endl;
}

void ChicagoClamPizza::bake()
{
	cout << "시카고 조개피자 굽는 중" << endl;
}

void ChicagoClamPizza::cut()
{
	cout << "시카고 조개피자 자르는 중" << endl;
}

void ChicagoClamPizza::box()
{
	cout << "시카고 조개피자 포장 중" << endl;
}

string ChicagoClamPizza::toString() {
	return string("시카고 조개피자");
}