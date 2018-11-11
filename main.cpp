#include <iostream>
#include "PizzaFactory/ChicagoPizzaFactory.h"
#include "PizzaFactory/NYPizzaFactory.h"
#include "PizzaStore/PizzaStore.h"

//��� ������ ���ڸ� �ϳ��� �ֹ��ϴ� �Լ�
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