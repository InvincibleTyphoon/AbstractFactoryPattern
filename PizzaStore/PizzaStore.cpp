#include "PizzaStore.h"

PizzaStore::PizzaStore(PizzaFactory * pizzaFactory)
{
	this->pizzaFactory = pizzaFactory;
}

Pizza* PizzaStore::orderPizza(const string& type)
{
	Pizza * pizza;
	pizza = pizzaFactory->createPizza(type);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}