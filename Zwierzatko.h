#ifndef ZWIERZATKO_H
#define	ZWIERZATKO_H
#include "Zdrowie.h"
#include "Humor.h"
#include "Wiek.h"
#include "windows.h" 
#include <iostream>
#include <string>


using namespace std;

class Zwierzatko {
public:
	string imie;
	Zdrowie zdrowie;
	Wiek wiek;
	Humor humor;
	
	
	string getImie() {
		return imie;
	}

	Wiek getWiek() {
		return wiek;
	}

	virtual string getRodzajZwierzatka() = 0;
	virtual void dajGlos() = 0;
	virtual void rysujZwierzatko() = 0;
	virtual void  pobawSieObrazek() = 0;
	virtual void dajJesc() = 0;
	virtual void specjalnaUmiejetnosc() = 0;


	Zwierzatko& operator=(const Zwierzatko& zwierzatko);
	void zabierzDoWeterynarza(bool wynik);
	//string stanZdrowia();
	//ostream& operator<<(ostream& s);
	void okreslHumor();
	//void ustawFajnyHumor();
	void polozSpac();
	void wypiszInformacjeoZwierzatku();
	bool czyZwierzatkoZmeczone();



	Zwierzatko(string imie);
	virtual ~Zwierzatko() = default;

};
#endif