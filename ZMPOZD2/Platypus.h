#pragma once
#include "Mammal.h"
#include "Reptile.h"
#include "Bird.h"
class Platypus :
	public Mammal, public Reptile, public Bird
{
public:
	Platypus();
	~Platypus();
};

