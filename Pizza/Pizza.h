#pragma once
#include <string>

using namespace std;

//피자 인터페이스
class Pizza
{
public:
	virtual void prepare() = 0;			//피자의 재료를 준비한다.
	virtual void bake() = 0;		//피자를 굽는다
	virtual void cut() = 0;			//피자를 자른다.
	virtual void box() = 0;			//피자를 박스에 담는다.
	virtual string toString() = 0;	//피자의 종류를 스트링으로 리턴한다.
protected:
};

