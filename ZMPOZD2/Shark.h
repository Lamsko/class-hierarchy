#pragma once
#include "Fish.h"
class Shark :
	public Fish
{
public:
	Shark();
	~Shark();
	void f();
	virtual void vf();
};

