#pragma once
#include "Mammal.h"
class Dog :
	public Mammal
{
public:
	Dog();
	~Dog();
	void f();
	virtual void vf();
};

