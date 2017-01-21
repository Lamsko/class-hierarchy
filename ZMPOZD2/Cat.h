#pragma once
#include "Mammal.h"
class Cat :
	public Mammal
{
public:
	Cat();
	~Cat();
	void f();
	virtual void vf();
};

