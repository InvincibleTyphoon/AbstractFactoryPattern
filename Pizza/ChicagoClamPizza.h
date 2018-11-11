#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//시카고식 조개 피자
class ChicagoClamPizza : public Pizza
{
public:
	ChicagoClamPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

