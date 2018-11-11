#pragma once
#include <string>
#include "../Pizza/Pizza.h"

class PizzaFactory
{
public:
	//type�� �������� ���ڸ� ����
	//���� ���� Ÿ���̶�� NULL ����
	virtual Pizza* createPizza(const string& type) = 0;
};

