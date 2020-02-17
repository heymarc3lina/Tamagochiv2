#include "Menu.h"


Menu:: Menu() {
	odpowiedz = 0;
	naszeZabawki = Lista();
	sklep = SklepZabawek();
	
}

void Menu::wyborPoczatkuGryTekst() {
	sklep.zaladujListe();
	cout << "Co chcesz zrobic?" << endl;
	cout << "Wczytac poprzednia gre? Wybierz 1." << endl;
	cout << "Rozpoczac nowa gre? Wybierz 2." << endl;
	cin >> odpowiedz;
	while (!cin || !(odpowiedz == 1 || odpowiedz == 2)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max() , '\n');
		cout << "Zla odpowiedz. Wybierz poprawna." << endl;
		cin >> odpowiedz;
	}
	
}


void Menu::wyborPoczatkuGry() {
	if (odpowiedz == 1) {
		string zabawki = "zapisz.txt";
		string zwierzatko = "zwierzatkoplik.txt";
		if (sprawdzCzyPlikPusty(zwierzatko) == 1) {
			if (sprawdzCzyPlikPusty(zabawki) == 1) {
				naszeZabawki.zaladujzPliku(zabawki);
				otworzPlikStanGry(zwierzatko);
				this->zwierzatko->wypiszInformacjeoZwierzatku();
			}
		}
		else {
			cout << "Nie ma zadnej zapamietanej gry." << endl;
			wyborZwierzatkaTekst();
			wyborZwierzatka();
		}
	}
	else {
		wyborZwierzatkaTekst();
		wyborZwierzatka();
	}
}

void Menu::wyborZwierzatkaTekst() {
	cout << "Wybierz zwierzatko." << endl;
	cout << " Wpisz 1 jesli chcesz psa" << endl;
	cout << " Wpisz 2 jesli chcesz kota" << endl;
	cout << " Wpisz 3 jesli chcesz chomika" << endl;
	cout << " Wpisz 4 jesli chcesz owce" << endl;
	cout << " Wpisz 5 jesli chcesz swinke" << endl;
	cin >> odpowiedz;
	while (!cin || !(odpowiedz == 1 || odpowiedz == 2 || odpowiedz == 3 || odpowiedz == 4 || odpowiedz == 5)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Zla odpowiedz. Wybierz poprawna." << endl;
		cin >> odpowiedz;
	}
	
}

bool Menu::sprawdzCzyPlikPusty(string nazwa) {
	ifstream plik(nazwa);
	plik.seekg(0, ios::end);
	if (plik) {
		int temp = plik.tellg();
		if (temp == 0) {
			plik.close();
			return 0;
		}
		else {
			plik.close();
			return 1;
		}
	}
	plik.close();
	return 0;
}

void Menu::wyborZwierzatka() {

	string nazwa;
	cin.ignore();
	if (odpowiedz == 1) {
		cout << "Super! Twoj wybor to pies. Nadaj mu imie." << endl;
		getline(cin, nazwa);
		zwierzatko = new Pies(nazwa);
	}
	else if (odpowiedz == 2) {
		cout << "Super! Twoj wybor to kot. Nadaj mu imie." << endl;
		getline(cin, nazwa);
		zwierzatko = new Kot(nazwa);
	}
	else if (odpowiedz == 3) {
		cout << "Super! Twoj wybor to Chomik. Nadaj mu imie." << endl;
		getline(cin, nazwa);
		zwierzatko = new Chomik(nazwa);
	}
	else if (odpowiedz == 4) {
		cout << "Super! Twoj wybor to Owca. Nadaj jej imie." << endl;
		getline(cin, nazwa);
		zwierzatko = new Owca(nazwa);
	}
	else {
		cout << "Super! Twoj wybor to Swinka. Nadaj jej imie." << endl;
		getline(cin, nazwa);
		zwierzatko = new Swinka(nazwa);
	}
	
	zwierzatko->rysujZwierzatko();
}


void Menu::otworzPlikStanGry(string nazwa) {
	ifstream plik(nazwa);
	if (plik) {
		string imie;
		string rodzaj;
		string objawy;
		bool zdrowie;
		int godzina, minuta, sekunda;
		plik >> rodzaj >> godzina >> minuta >> sekunda >> zdrowie;
		getline(plik, imie);
		getline(plik, objawy);
			if (rodzaj == "Pies") {
				zwierzatko = new Pies(imie);
			}
			else if (rodzaj == "Kot") {
				zwierzatko = new Kot(imie);
			}
			else if (rodzaj == "Owca") {
				zwierzatko = new Owca(imie);
			}
			else if (rodzaj == "Chomik") {
				zwierzatko = new Chomik(imie);
			}
			else {
				zwierzatko = new Swinka(imie);

			}
			zwierzatko->humor.setHumor("smutny");
			zwierzatko->wiek.setGodzinaMinutaSekunda(godzina, minuta, sekunda);
			zwierzatko->zdrowie.setZdrowie(zdrowie);
			zwierzatko->zdrowie.setObjawy(objawy);
		
		cout << "Wczytano pomyslnie" << endl;
		plik.close();
	}
	else {
		cout << "NIe uda³o sie otworzyc pliku" << endl;
		exit(0);
	}

}

void Menu::wyborCzynnosciTekst() {
	cout << "Co chcesz zrobic?" << endl;
	cout << "wybierz 0 jesli chcesz wyjsc" << endl;
	cout << "Wybierz 1 jesli chcesz wypisac informacje" << endl;
	cout << "Wybierz 2 jesli chcesz kupic zabawke" << endl;
	cout << "Wybierz 3 jesli chcesz aby zwierzatko dalo glos" << endl;
	cout << "Wybierz 4 jesli chcesz zabrac zwierzatko do weterynarza" << endl;
	cout << "Wybierz 5 jesli chcesz sie pobawic." << endl;
	cout << "Wybierz 6 jesli chcesz przytulic badz poglaskac zwierzatko" << endl;
	cout << "Wybierz 7 jesli chcesz polozyc zwierzatko spac" << endl;
	cout << "Wybierz 8 jesli chcesz nakarmic zwierzatko" << endl;
	if (zwierzatko->getRodzajZwierzatka() == "Owca") {
		cout << "Wybierz 9 jesli chcesz ogolic owce" << endl;
	}
	else if (zwierzatko->getRodzajZwierzatka() == "Pies") {
		cout << "Wybierz 9 jesli chcesz aby piesek pomerdal ogonkiem" << endl;
	}
	else if (zwierzatko->getRodzajZwierzatka() == "Kot") {
		cout << "Wybierz 9 jesli chcesz aby kot zrobi³ koci grzbiet" << endl;
	}
	else if (zwierzatko->getRodzajZwierzatka() == "Chomik") {
		cout << "Wybierz 9 jesli chcesz aby chomik Cie zaskoczyl" << endl;
	}
	else {
		cout << "Wybierz 9 jesli chcesz wykompac swinke w blocie" << endl;
		cout << "Wybierz 10 jesli chcesz wykompac swinke po kompieli w blocie" << endl;
	}
	
	cin >> odpowiedz;

	while (!cin || !(odpowiedz == 0 ||odpowiedz == 1 || odpowiedz == 2 || odpowiedz == 3 || odpowiedz == 4 || odpowiedz == 5 || odpowiedz == 6 || odpowiedz == 7 || odpowiedz == 8 || odpowiedz == 9 || (odpowiedz == 10 && zwierzatko->getRodzajZwierzatka() == "Swinka"))) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Zla odpowiedz. Wybierz poprawna." << endl;
		cin >> odpowiedz;

	}

	
}



void Menu::zapiszDoPliku() {
	ofstream plik("zwierzatkoplik.txt ");
	
	if (plik) {

		plik << zwierzatko->getRodzajZwierzatka() << " " << zwierzatko->wiek.getGodzina() << " " << zwierzatko->wiek.getMinuta() << " " << zwierzatko->wiek.getSekunda() << " " << zwierzatko->zdrowie.getZdrowieBool() << " " << zwierzatko->getImie() << " " << endl;
		plik << zwierzatko->zdrowie.getObjaw();
		cout << "Zapisano pomyslnie" << endl;
		plik.close();
	}
	else {
		cout << "Nie udalo sie zapisac gry" << endl;
	}
	
	naszeZabawki.zapiszDoPliku("zapisz.txt");
		
	
}

Menu::~Menu() {
	sklep.~SklepZabawek();
	naszeZabawki.~Lista();
	
}