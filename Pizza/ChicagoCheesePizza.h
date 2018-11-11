#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//시카고식 치즈피자
class ChicagoCheesePizza : public Pizza
{
public:
	ChicagoCheesePizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

