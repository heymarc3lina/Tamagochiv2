#ifndef OWCA_H_
#define OWCA_H_
#include "Zwierzatko.h"


class Owca : public virtual Zwierzatko
{
public:
	const string rodzajZwierzatka = "Owca";
	bool ogolona;

	Owca(string nazwa);

	string getRodzajZwierzatka();


	void dajGlos();
	void specjalnaUmiejetnosc();
	void rysujZwierzatko();
	void pobawSieObrazek();
	void dajJesc();
	Owca& operator=(const Owca& owca);


	//~Owca() = deafult;
};
#endif