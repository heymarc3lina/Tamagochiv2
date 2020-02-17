#ifndef SWINKA_H_
#define SWINKA_H_
#include "Zwierzatko.h"


class Swinka : public virtual Zwierzatko
{
public:
	const string rodzajZwierzatka = "Swinka";

	Swinka(string nazwa);
	string getRodzajZwierzatka();
	void specjalnaUmiejetnosc();
	void dajGlos();

	void rysujZwierzatko();
	void pobawSieObrazek();
	void dajJesc();
	Swinka& operator=(const Swinka& pies);


	//~Pies() = deafult;
};
#endif