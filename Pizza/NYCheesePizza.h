#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//뉴욕식 치즈 피자
class NYCheesePizza : public Pizza
{
public:
	NYCheesePizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

