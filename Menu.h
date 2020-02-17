#ifndef MENU_H_
#define MENU_H_
#include "Pies.h"
#include "Kot.h"
#include "Chomik.h"
#include "Swinka.h"
#include "Owca.h"
#include "Lista.h"
#include "SklepZabawek.h"
#include <climits>
#include <iostream>
#undef max


class Menu {
public:
	int odpowiedz;
	Zwierzatko * zwierzatko;
	Lista naszeZabawki;
	SklepZabawek sklep;
	

	Menu();
	~Menu();
	void wyborPoczatkuGryTekst();
	void wyborPoczatkuGry();
	void wyborZwierzatkaTekst();
	void wyborZwierzatka();
	bool sprawdzCzyPlikPusty(string nazwa);
	void otworzPlikStanGry(string nazwa);
	void wyborCzynnosciTekst();
	void zapiszDoPliku();
	//void sprawdzCzyDobraOdpowiedzWyborZwierzatka();
	
	
	//void wczytajPlikStanGry(string nazwa);
	//void otworzPlikStanGry(string nazwa);
	//void wyborCzynnosciTekst();
};
#endif