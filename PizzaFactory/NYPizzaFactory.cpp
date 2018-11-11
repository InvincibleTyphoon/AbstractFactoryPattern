#include "NYPizzaFactory.h"



NYPizzaFactory::NYPizzaFactory()
{
}

Pizza* NYPizzaFactory::NYPizzaFactory::createPizza(const string& type)
{
	Pizza * pizza = NULL;

	if (type.compare("cheese") == 0)
		pizza = new NYCheesePizza();
	else if (type.compare("pepperoni") == 0)
		pizza = new NYPepperoniPizza();
	else if (type.compare("clam") == 0)
		pizza = new NYClamPizza();
	else if (type.compare("veggi") == 0)
		pizza = new NYVeggiPizza();

	return pizza;
}