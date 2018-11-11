#include <iostream>
#include "PizzaFactory/ChicagoPizzaFactory.h"
#include "PizzaFactory/NYPizzaFactory.h"
#include "PizzaStore/PizzaStore.h"

//모든 종류의 피자를 하나씩 주문하는 함수
void orderEveryPizza(PizzaStore * pizzaStore)
{
	pizzaStore->orderPizza("cheese");
	pizzaStore->orderPizza("clam");
	pizzaStore->orderPizza("pepperoni");
	pizzaStore->orderPizza("veggi");
}

int main()
{
	NYPizzaFactory nyPizzaFactory;
	ChicagoPizzaFactory chicagoPizzaFactory;

	PizzaStore nyPizzaStore(&nyPizzaFactory);
	PizzaStore chicagoPizzaStore(&chicagoPizzaFactory);

	orderEveryPizza(&nyPizzaStore);
	orderEveryPizza(&chicagoPizzaStore);

	return 0;
}