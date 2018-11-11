#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//뉴욕식 페퍼로니 피자
class NYPepperoniPizza : public Pizza
{
public:
	NYPepperoniPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

