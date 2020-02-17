#ifndef CHOMIK_H_
#define CHOMIKH_
#include "Zwierzatko.h"


class Chomik : public virtual Zwierzatko
{
public:
	const string rodzajZwierzatka = "Chomik";


	Chomik(string nazwa);

	string getRodzajZwierzatka();
	void dajGlos();
	void specjalnaUmiejetnosc();

	void rysujZwierzatko();
	void pobawSieObrazek();
	void dajJesc();
	Chomik& operator=(const Chomik& chomik);


	//~Chomik() = deafult;
};

#endif