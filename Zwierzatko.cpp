#include "Zwierzatko.h"
#include <random>


Zwierzatko::Zwierzatko(string imie) {
	this->imie = imie;
	humor = Humor();
	zdrowie = Zdrowie();
	wiek = Wiek();
	
}

Zwierzatko& Zwierzatko ::operator=(const Zwierzatko& zwierzatko) {
	if (this == &zwierzatko) {
		return *this;
	}

	this->imie = zwierzatko.imie;
	this->humor = zwierzatko.humor;
	this->wiek = zwierzatko.wiek;
	this->zdrowie = zwierzatko.zdrowie;

	return *this;

}

void Zwierzatko::okreslHumor() {
	humor.ustawHumor();
}


void Zwierzatko::polozSpac() {
	cout << "Zwierzatko poszlo spac" << endl;
	int sekundy = Losowanie::wylosujLiczbezPodanegoPrzedzialu(2, 7);
	cout << "Poczekaj az sie wyspi. Zeby sie wyspac zwierzatko potrzebuje " << sekundy << " sekund." << endl;
	Sleep(sekundy * 1000);
	while (humor.getHumor() == "zmeczony") {
		humor.zmienZmeczenie();
	}
}

void Zwierzatko::wypiszInformacjeoZwierzatku() {

	cout << "Czesc! Oto informacje o twoim zwierzatku." << endl;
	cout << "Imie: " << imie << endl;
	wiek.podajIleCzasuUplyneloOdStworzenia();
	cout << "Humor :" << humor.getHumor() << endl;
	cout << "Stan zdrowia: " << zdrowie.getZdrowie() << endl;
	cout << "Objawy jakie ma: " << zdrowie.getObjaw() << endl;
	
	
}

//void Zwierzatko::ustawFajnyHumor() {
//	int liczba = Losowanie::wylosujLiczbezPodanegoPrzedzialu(0,7);
//	while (liczba != 1 && liczba != 2 && liczba != 4 && liczba != 6) {
//		liczba = Losowanie::wylosujLiczbezPodanegoPrzedzialu(0, 7);
//	}
//	humor.ustawFajnyHumor(liczba);
//
//}

bool Zwierzatko::czyZwierzatkoZmeczone() {
	if (humor.getHumor() == "zmeczony") {
		return 1;
	}
	return 0;
}

void Zwierzatko::zabierzDoWeterynarza(bool wynik) {
	if (wynik == 1) {
		zdrowie.setObjawy("Brak");
		zdrowie.setZdrowie(1);
		humor.ustawHumor();
	}
	else {
		humor.setHumor("zly");
	}
}