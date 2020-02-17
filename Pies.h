#ifndef PIES_H_
#define PIES_H_
#include "Zwierzatko.h"


class Pies : public virtual Zwierzatko
{
public:
	const string rodzajZwierzatka = "Pies";

	Pies(string nazwa);
	string getRodzajZwierzatka();
	void specjalnaUmiejetnosc();
	void dajGlos();

	void rysujZwierzatko();
	void pobawSieObrazek();
	void dajJesc();
	Pies& operator=(const Pies& pies);


	//~Pies() = deafult;
};
#endif