#pragma once
#include "Cat.h"
class Lion :
	public Cat
{
public:
	Lion();
	~Lion();
	void f();
	virtual void vf();
};

