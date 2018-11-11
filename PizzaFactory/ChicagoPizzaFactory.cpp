#include "ChicagoPizzaFactory.h"



ChicagoPizzaFactory::ChicagoPizzaFactory()
{
}

Pizza* ChicagoPizzaFactory::createPizza(const string& type)
{
	Pizza * pizza = NULL;

	if (type.compare("cheese") == 0)
		pizza = new ChicagoCheesePizza();
	else if (type.compare("pepperoni") == 0)
		pizza = new ChicagoPepperoniPizza();
	else if (type.compare("clam") == 0)
		pizza = new ChicagoClamPizza();
	else if (type.compare("veggi") == 0)
		pizza = new ChicagoVeggiPizza();

	return pizza;
}