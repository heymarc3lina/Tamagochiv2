#include "Zabawka.h"


Zabawka::Zabawka(string rodzajZabawki, string kolor, int zepsute , bool zuzycie )  {
	this->rodzajZabawki = rodzajZabawki;
	this->kolor = kolor;
	this->zepsute = zepsute;
	this->zurzycie = zuzycie;
}


void Zabawka::wypiszRodzajKolor() {
	cout << "Rodzaj zabawki: " << rodzajZabawki << "        Kolor: " << kolor << endl;
}

bool Zabawka::operator==(const Zabawka & zabawka) {
	return ((kolor == zabawka.kolor) && (rodzajZabawki == zabawka.rodzajZabawki));
}

Zabawka & Zabawka::operator=(const Zabawka& zabawka) {
	if (this == &zabawka) {
		return *this;
	}
	
	this->kolor = zabawka.kolor;
	this->zepsute = zabawka.zepsute;
	this->zurzycie = zabawka.zurzycie;
	this->rodzajZabawki =zabawka. rodzajZabawki;
	return *this;
}

int & Zabawka ::operator+=(int dodaj) {
	zurzycie += dodaj;
	return zurzycie;
}

bool Zabawka::pobawSie() {

	int losowe = Losowanie::wylosujLiczbezPodanegoPrzedzialu(0, 1);
	/*int losowe = 1;*/
	cout << "Wylosowano " << losowe << endl;
		if (losowe % 2 == 1) {

			int losowe1 = Losowanie::wylosujLiczbezPodanegoPrzedzialu(99, 100);
			cout << "WYlosowano do dodania do zepsucia  " << losowe1 << endl;
			zurzycie += losowe1;
			setZurzycie(zurzycie);
			cout << "Zuzycie zabawki to: " << getZurzycie() << endl;
			
			
			if (getZurzycie() > 99) {
				zepsute = 1;
				cout << "Zabawka sie popsula." << endl;
				return 0;

			}
			
		}

		cout << "Super! Podczas zabawy zabawka sie nie popsula!" << endl;
		return 1;
		
}





bool Zabawka::naprawZabawke() {
	
	int losowe = Losowanie::wylosujLiczbezPodanegoPrzedzialu(1, 20);

	if (losowe % 5 == 0) {
		this->zepsute = 0;
		cout << "Zabawka zostala naprawiona!" << endl;
		return 1;
	}

	cout << "Zabawki nie udalo sie naprawic! Nalezy kupic nowa lub wybrac z listy." << endl;
	return 0;
}