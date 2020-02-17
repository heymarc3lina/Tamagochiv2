#ifndef ZABAWKA_H
#define ZABAWKA	_H
#include "Losowanie.h"
#include <iostream>
#include <string>

using namespace std;

class Zabawka {
private:
	string rodzajZabawki;
	string kolor;
	bool zepsute;
	int zurzycie;

public:
	
	inline string getRodzajZabawki() {
		return rodzajZabawki;
	}
	inline void setRodzaj(string rodzaj) {
		this->rodzajZabawki = rodzaj;
	}
	inline void setKolor(string kolor) {
		this->kolor = kolor;
	}
	inline void setZepsucie(bool zepsucie) {
		this->zepsute = zepsucie;
	}
	inline void setZurzycie(int zurzycie) {
		this->zurzycie = zurzycie;
	}
	inline string getKolor() {
		return kolor;
	}
	bool getZepsucie() {
		return zepsute;
	}

	int getZurzycie() {
		return zurzycie;
	}

	int & operator+=(int dodaj);
	void wypiszRodzajKolor();
    bool pobawSie();
	bool naprawZabawke();
	Zabawka & operator=(const Zabawka& zabawka);

	//Zabawka() = default;
	Zabawka(string rodzajZabawki, string kolor, int zepsute = 0, bool zuzycie = 0);
	~Zabawka() = default;
	bool operator==(const Zabawka &);

};

#endif