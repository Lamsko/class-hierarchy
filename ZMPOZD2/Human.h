#pragma once
#include "Ape.h"
class Human :
	public Ape
{
public:
	Human();
	~Human();
	void f();
	virtual void vf();
};

