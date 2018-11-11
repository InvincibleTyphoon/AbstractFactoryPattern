#pragma once
#include "PizzaFactory.h"
#include "../Pizza/NYCheesePizza.h"
#include "../Pizza/NYClamPizza.h"
#include "../Pizza/NYPepperoniPizza.h"
#include "../Pizza/NYVeggiPizza.h"

class NYPizzaFactory : public PizzaFactory
{
public:
	NYPizzaFactory();

	Pizza* createPizza(const string& type) override;
};

