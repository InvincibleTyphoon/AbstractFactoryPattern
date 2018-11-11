#include "NYPepperoniPizza.h"


NYPepperoniPizza::NYPepperoniPizza() { }

void NYPepperoniPizza::prepare()
{
	cout << "뉴욕 페퍼로니피자 준비 중" << endl;
}

void NYPepperoniPizza::bake()
{
	cout << "뉴욕 페퍼로니피자 굽는 중" << endl;
}

void NYPepperoniPizza::cut()
{
	cout << "뉴욕 페퍼로니피자 자르는 중" << endl;
}

void NYPepperoniPizza::box()
{
	cout << "뉴욕 페퍼로니피자 포장 중" << endl;
}

string NYPepperoniPizza::toString() {
	return string("뉴욕 페퍼로니피자");
}