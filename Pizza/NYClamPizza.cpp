#include "NYClamPizza.h"


NYClamPizza::NYClamPizza() { }

void NYClamPizza::prepare()
{
	cout << "뉴욕 조개피자 준비 중" << endl;
}

void NYClamPizza::bake()
{
	cout << "뉴욕 조개피자 굽는 중" << endl;
}

void NYClamPizza::cut()
{
	cout << "뉴욕 조개피자 자르는 중" << endl;
}

void NYClamPizza::box()
{
	cout << "뉴욕 조개피자 포장 중" << endl;
}

string NYClamPizza::toString() {
	return string("뉴욕 조개피자");
}