#pragma once
#include <string>
#include "../Pizza/Pizza.h"
#include "../PizzaFactory/PizzaFactory.h"

using namespace std;

//피자 가게 클래스
class PizzaStore
{
protected:
	PizzaFactory * pizzaFactory;

public:
	PizzaStore(PizzaFactory * pizzaFactory);
	Pizza* orderPizza(const string& type);
};

