#pragma once
#include "Bird.h"
#include "Reptile.h"
class Archeopteryx :
	public Bird, public Reptile
{
public:
	Archeopteryx();
	~Archeopteryx();
	void f();
	virtual void vf();
};

