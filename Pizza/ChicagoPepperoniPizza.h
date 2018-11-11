#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//시카고식 페퍼로니 피자
class ChicagoPepperoniPizza : public Pizza
{
public:
	ChicagoPepperoniPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

