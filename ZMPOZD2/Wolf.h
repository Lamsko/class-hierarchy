#pragma once
#include "Dog.h"
class Wolf :
	public Dog
{
public:
	Wolf();
	~Wolf();
	void f();
	virtual void vf();
};

