#pragma once
#include "PizzaFactory.h"
#include "../Pizza/ChicagoCheesePizza.h"
#include "../Pizza/ChicagoClamPizza.h"
#include "../Pizza/ChicagoPepperoniPizza.h"
#include "../Pizza/ChicagoVeggiPizza.h"

class ChicagoPizzaFactory : public PizzaFactory
{
public:
	ChicagoPizzaFactory();
	Pizza* createPizza(const string& type) override;
};

