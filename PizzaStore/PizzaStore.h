#pragma once
#include <string>
#include "../Pizza/Pizza.h"
#include "../PizzaFactory/PizzaFactory.h"

using namespace std;

//���� ���� Ŭ����
class PizzaStore
{
protected:
	PizzaFactory * pizzaFactory;

public:
	PizzaStore(PizzaFactory * pizzaFactory);
	Pizza* orderPizza(const string& type);
};

