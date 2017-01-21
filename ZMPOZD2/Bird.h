#pragma once
#include "Animal.h"
class Bird :
	public Animal
{
public:
	Bird();
	~Bird();
	void f();
	virtual void vf();
};

