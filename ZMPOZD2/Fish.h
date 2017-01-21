#pragma once
#include "Animal.h"
class Fish :
	public Animal
{
public:
	Fish();
	~Fish();
	void f();
	virtual void vf();
};

