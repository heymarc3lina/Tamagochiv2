#ifndef	SKLEPZABAWEK_H_
#define SKLEPZABAWEK_H_
#include "Lista.h"
#include <limits>

class SklepZabawek {
public:
	Lista dostepneZabawki;

	SklepZabawek();
	~SklepZabawek();
	void zaladujListe();
	int wypisz();
	Zabawka kupZabawke();
};
#endif