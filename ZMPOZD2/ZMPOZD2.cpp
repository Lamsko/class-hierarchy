// ZMPOZD2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "Animal.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Snake.h"
#include "Cat.h"
#include "Lion.h"
#include "Tiger.h"
#include "Bird.h"
#include "Archeopteryx.h"
#include "Fish.h"
#include "Amphibians.h"
#include "Platypus.h"
#include "Dog.h"
#include "Wolf.h"
#include "Fox.h"
#include "Shark.h"
#include "Frog.h"
#include "Ape.h"
#include "Orangutan.h"
#include "Gorilla.h"
#include "Human.h"

using namespace std;

int main()
{
	cout << "Klasa bazowa wszystkich pozostalych klas:" << endl;
	Animal animal;
	animal.f();
	animal.vf();
	cout << "Wywo³anie funkcji na obiekcie typu Mammal:" << endl;
	Mammal mammal;
	mammal.f();
	mammal.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Animal na obiekt Mammal:" << endl;
	Animal * wmammal = &mammal;
	wmammal->f();
	wmammal->vf();
	cout << "Wywo³anie funkcji na obiekcie typu Reptile:" << endl;
	Reptile reptile;
	reptile.f();
	reptile.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Animal na obiekt Reptile:" << endl;
	Animal * wreptile = &reptile;
	wreptile->f();
	wreptile->vf();
	cout << "Wywo³anie funkcji na obiekcie typu Snake:" << endl;
	Snake snake;
	snake.f();
	snake.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Animal na obiekt Snake:" << endl;
	Animal * wasnake = &snake;
	wasnake->f();
	wasnake->vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Reptile na obiekt Snake:" << endl;
	Reptile * wrsnake = &reptile;
	wrsnake->f();
	wrsnake->vf();
	Cat cat;
	cout << "Wywo³anie funkcji na obiekcie typu Lion:" << endl;
	Lion lion;
	lion.f();
	lion.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Cat na obiekt Lion:" << endl;
	Cat * wclion = &lion;
	wclion->f();
	wclion->vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Mammal na obiekt Lion:" << endl;
	Mammal * wmlion = &lion;
	wmlion->f();
	wmlion->vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Animal na obiekt Lion:" << endl;
	Animal * walion = &lion;
	walion->f();
	walion->vf();
	cout << "Wywo³anie funkcji na obiekcie typu Tiger:" << endl;
	Tiger tiger;
	tiger.f();
	tiger.vf();
	cout << "Wywo³anie funkcji na obiekcie typu Bird:" << endl;
	Bird bird;
	bird.f();
	bird.vf();
	Fish fish;
	cout << "Wywo³anie funkcji na obiekcie typu Shark:" << endl;
	Shark shark;
	shark.f();
	shark.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Fish na obiekt Shark:" << endl;
	Fish * wfshark = &shark;
	wfshark->f();
	wfshark->vf();
	Amphibians amphibians;
	cout << "Wywo³anie funkcji na obiekcie typu Frog:" << endl;
	Frog frog;
	frog.f();
	frog.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Amphibians na obiekt Frog:" << endl;
	Amphibians * wafrog = &frog;
	wafrog->f();
	wafrog->vf();
	Dog dog;
	cout << "Wywo³anie funkcji na obiekcie typu Wolf:" << endl;
	Wolf wolf;
	wolf.f();
	wolf.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Dog na obiekt Wolf:" << endl;
	Dog * wdwolf = &wolf;
	wdwolf->f();
	wdwolf->vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Mammal na obiekt Wolf:" << endl;
	Mammal * wmwolf = &wolf;
	wmwolf->f();
	wmwolf->vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Animal na obiekt Wolf:" << endl;
	Animal * wawolf = &wolf;
	wawolf->f();
	wawolf->vf();
	cout << "Wywo³anie funkcji na obiekcie typu Fox:" << endl;
	Fox fox;		
	fox.f();
	fox.vf();
	cout << "Wywo³anie funkcji na obiekcie typu Ape:" << endl;
	Ape ape;
	ape.f();
	ape.vf();
	cout << "Wywo³anie funkcji na obiekcie typu Orangutan:" << endl;
	Orangutan orangutan;
	orangutan.f();
	orangutan.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Ape na obiekt Orangutan:" << endl;
	Ape * waorangutan = &orangutan;
	waorangutan->f();
	waorangutan->vf();
	cout << "Wywo³anie funkcji na obiekcie typu Gorilla:" << endl;
	Gorilla gorilla;
	gorilla.f();
	gorilla.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Mammal na obiekt Gorilla:" << endl;
	Mammal * wmgorilla = &gorilla;
	wmgorilla->f();
	wmgorilla->vf();
	cout << "Wywo³anie funkcji na obiekcie typu Human:" << endl;
	Human human;
	human.f();
	human.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Animal na obiekt Human:" << endl;
	Animal * wahuman = &human;
	wahuman->f();
	wahuman->vf();
	cout << "-------------------------------------------------------" << endl;
	cout << "Najciekawsze przypadki - z dziedziczeniem wielokrotnym." << endl;
	cout << "Wywo³anie funkcji na obiekcie typu Archeopteryx:" << endl;
	Archeopteryx archeopteryx;
	archeopteryx.f();
	archeopteryx.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Bird na obiekt Archeopteryx:" << endl;
	Bird * wbarcheopteryx = &archeopteryx;	
	wbarcheopteryx->f();
	wbarcheopteryx->vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Reptile na obiekt Archeopteryx:" << endl;
	Reptile * wrarcheopteryx = &archeopteryx;	
	wrarcheopteryx->f();
	wrarcheopteryx->vf();
	cout << "Wywo³anie funkcji na obiekcie typu Platypus " << endl;
	Platypus platypus;
	platypus.f();
	platypus.vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Reptile na obiekt Platypus:" << endl;
	Reptile * wrplatypus = &platypus;
	wrplatypus->f();
	wrplatypus->vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Bird na obiekt Platypus:" << endl;
	Bird * wbplatypus = &platypus;
	wbplatypus->f();
	wbplatypus->vf();
	cout << "Wywo³anie funkcji poprzez wskaŸnik typu Mammal na obiekt Platypus:" << endl;
	Mammal * wmplatypus = &platypus;
	wmplatypus->f();
	wmplatypus->vf();

    return 0;
}

