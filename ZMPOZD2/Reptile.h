#pragma once
#include "Animal.h"
class Reptile :
	public Animal
{
public:
	Reptile();
	~Reptile();
	void f();
	virtual void vf();
};

