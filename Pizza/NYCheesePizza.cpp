#include "NYCheesePizza.h"


NYCheesePizza::NYCheesePizza(){ }

void NYCheesePizza::prepare()
{
	cout << "뉴욕 치즈피자 준비 중" << endl;
}

void NYCheesePizza::bake()
{
	cout << "뉴욕 치즈피자 굽는 중" << endl;
}

void NYCheesePizza::cut()
{
	cout << "뉴욕 치즈피자 자르는 중" << endl;
}

void NYCheesePizza::box()
{
	cout << "뉴욕 치즈피자 포장 중" << endl;
}

string NYCheesePizza::toString() {
	return string("뉴욕 치즈피자");
}