#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//뉴욕식 야채 피자
class NYVeggiPizza : public Pizza
{
public:
	NYVeggiPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

