#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//뉴욕식 조개 피자
class NYClamPizza : public Pizza
{
public:
	NYClamPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

