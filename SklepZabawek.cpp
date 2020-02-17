#include "SklepZabawek.h"

SklepZabawek::SklepZabawek() {
	dostepneZabawki = Lista();
}

int SklepZabawek::wypisz() {
	return dostepneZabawki.wypiszListe();
}

void SklepZabawek::zaladujListe() {
	string nazwa = "zabawki.txt";
	dostepneZabawki.zaladujzPliku(nazwa);
}
SklepZabawek::~SklepZabawek() {
	dostepneZabawki.~Lista();
}

Zabawka SklepZabawek::kupZabawke() {
	cout << "Witaj w sklepie zabawek. Wybierz zabawke ktora chcesz kupic" << endl;
	int ilosc = wypisz() - 1;
	int odpowiedz;
	cin >> odpowiedz;
	while ((!cin || !(odpowiedz <= ilosc && odpowiedz >= 1))) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Zla odpowiedz. Wybierz poprawna." << endl;
		cin >> odpowiedz;
	}
	
	 return dostepneZabawki.znajdzZabawke(odpowiedz);
		
}