#pragma once
#include "Animal.h"
class Mammal :
	public Animal
{
public:
	Mammal();
	~Mammal();
	void f();
	virtual void vf();
};

