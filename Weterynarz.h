#ifndef WETERYNARZ_H_
#define WETERYNARZ_H_
#include <iostream>
#include <string>
#include "Losowanie.h"
#include "windows.h" 
using namespace std;

class Weterynarz {

public:
	Weterynarz() = default;

	bool wizytauWeterynarza(string objawy);
	void poczekajwKolejce();
	int zbadajZwierzatko(string objawy);
	bool proceduraLeczenia(int opcjaLeczenia);

	
};

#endif