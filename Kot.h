#ifndef KOT_H_
#define KOT_H_
#include "Zwierzatko.h"


class Kot : public virtual  Zwierzatko {
public:
	const string rodzajZwierzatka = "Kot";

	Kot(string nazwa);
	string getRodzajZwierzatka();
	void dajGlos();
	void dajJesc();
	void rysujZwierzatko();
	void specjalnaUmiejetnosc();
	void pobawSieObrazek();

	Kot& operator=(const Kot& kot);

};

#endif