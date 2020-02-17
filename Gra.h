#include  "Menu.h"
#include "Weterynarz.h"


class Gra {
public:
	Menu menu;
	Weterynarz wet;
	int pozycjawLiscie;

	Gra();
	~Gra();
	void graj();
	int wyborCzynnosci();
	void pobawSie();
	void zabawkaPopsuta();
	void kupAlboWybierz();
	void kup();

};