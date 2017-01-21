#pragma once
#include "Mammal.h"
class Ape :
	public Mammal
{
public:
	Ape();
	~Ape();
	void f();
	virtual void vf();
};

