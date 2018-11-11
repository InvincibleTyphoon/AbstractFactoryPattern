#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//시카고식 야채 피자
class ChicagoVeggiPizza : public Pizza
{
public:
	ChicagoVeggiPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

