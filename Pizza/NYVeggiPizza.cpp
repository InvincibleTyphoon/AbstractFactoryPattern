#include "NYVeggiPizza.h"


NYVeggiPizza::NYVeggiPizza() { }

void NYVeggiPizza::prepare()
{
	cout << "뉴욕 야채피자 준비 중" << endl;
}

void NYVeggiPizza::bake()
{
	cout << "뉴욕 야채피자 굽는 중" << endl;
}

void NYVeggiPizza::cut()
{
	cout << "뉴욕 야채피자 자르는 중" << endl;
}

void NYVeggiPizza::box()
{
	cout << "뉴욕 야채피자 포장 중" << endl;
}

string NYVeggiPizza::toString() {
	return string("뉴욕 야채피자");
}