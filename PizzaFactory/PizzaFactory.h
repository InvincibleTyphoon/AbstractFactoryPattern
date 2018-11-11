#pragma once
#include <string>
#include "../Pizza/Pizza.h"

class PizzaFactory
{
public:
	//type을 기준으로 피자를 리턴
	//만약 없는 타입이라면 NULL 리턴
	virtual Pizza* createPizza(const string& type) = 0;
};

