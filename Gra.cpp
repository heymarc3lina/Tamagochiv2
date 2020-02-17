#include "Gra.h"

Gra::Gra() {
	menu = Menu();
	wet = Weterynarz();
	pozycjawLiscie = 0;
}


void Gra::pobawSie() {
	
	menu.zwierzatko->okreslHumor();
	menu.zwierzatko->pobawSieObrazek();
	if (!menu.naszeZabawki.glowa) {
		cout << "Nie posiadasz jeszcze zadnych zabawek" << endl;
		cout << "Przechodzimy do sklepu" << endl;
		kup();
	}
	else {
		int ilosc = menu.naszeZabawki.wypiszListe() - 1;
		cin >> menu.odpowiedz;
		while ((!cin || !(menu.odpowiedz <= ilosc && menu.odpowiedz >= 1))) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Zla odpowiedz. Wybierz poprawna." << endl;
			cin >> menu.odpowiedz;
		}
		pozycjawLiscie = menu.odpowiedz;
	}
	if (menu.naszeZabawki.znajdzZabawkewMojejLiscie(pozycjawLiscie).pobawSie() == 0) {
		menu.zwierzatko->humor.setHumor("smutny");
		zabawkaPopsuta();
		
	}
}

void Gra::zabawkaPopsuta() {
	
	cout << " Zabawka zepsuta. Nie mo¿esz uzyc tej zabawki." << endl;
	cout << "Co chcesz zrobic? " << endl;
	cout << "Wybierz 1 jeœli naprawic" << endl;
	cout << "Wybierz 2 jesli kupic nowa" << endl;
	cin >> menu.odpowiedz;
	while ((!cin || !(menu.odpowiedz ==1 || menu.odpowiedz ==2))) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Zla odpowiedz. Wybierz poprawna." << endl;
		cin >> menu.odpowiedz;
	}

	if (menu.odpowiedz == 1) {
		if (menu.naszeZabawki.znajdzZabawkewMojejLiscie(pozycjawLiscie).naprawZabawke() != 1) {
			menu.naszeZabawki.usunElement(menu.naszeZabawki.znajdzZabawkewMojejLiscie(pozycjawLiscie));
			kupAlboWybierz();
		} 
		else{
			menu.naszeZabawki.znajdzZabawkewMojejLiscie(pozycjawLiscie).setZurzycie(0);
			menu.naszeZabawki.znajdzZabawkewMojejLiscie(pozycjawLiscie).setZepsucie(0);
		}
	}
	else if (menu.odpowiedz == 2) {
		menu.naszeZabawki.usunElement(menu.naszeZabawki.znajdzZabawkewMojejLiscie(pozycjawLiscie));
		kup();
	}
	cout << "Wracamy do zabawy :)" << endl;
	menu.zwierzatko->okreslHumor();
	menu.zwierzatko->pobawSieObrazek();
}

void Gra::kup() {
	menu.naszeZabawki.naszaListaZabawek(menu.sklep.kupZabawke());
}

void Gra::kupAlboWybierz() {
	cout << "Co chcesz zrobic?" << endl;
	cout << "Wybierz 1 jesli kupic nowa zabawke. " << endl;
	cout << "Wybierz 2 jesli wybrac z lisy posiadanych zabawek" << endl;
	
	cin >> menu.odpowiedz;
	while ((!cin || !(menu.odpowiedz == 1 || menu.odpowiedz == 2))) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Zla odpowiedz. Wybierz poprawna." << endl;
		cin >> menu.odpowiedz;
	}
	if (menu.odpowiedz == 1) {
		kup();
	}
	else {
		if (!menu.naszeZabawki.glowa) {
			cout << "Nie posiadasz jeszcze zadnych zabawek" << endl;
			cout << "Przechodzimy do sklepu" << endl;
			kup();
		}
		else {
			int ilosc = menu.naszeZabawki.wypiszListe() - 1;
			cin >> menu.odpowiedz;
			while ((!cin || !(menu.odpowiedz <= ilosc && menu.odpowiedz >= 1))) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Zla odpowiedz. Wybierz poprawna." << endl;
				cin >> menu.odpowiedz;
			}
		}
		pozycjawLiscie = menu.odpowiedz;
		menu.naszeZabawki.znajdzZabawkewMojejLiscie(pozycjawLiscie);
	}



}

int Gra::wyborCzynnosci() {
	if (menu.odpowiedz == 0) {
		return 0;
	}
	else if (menu.odpowiedz == 1) {
		menu.zwierzatko->wypiszInformacjeoZwierzatku();
		menu.zwierzatko->rysujZwierzatko();
	}
	else if (menu.odpowiedz == 2) {
		kup();
	}
	else if (menu.odpowiedz == 3) {
		menu.zwierzatko->dajGlos();
	}
	else if (menu.odpowiedz == 4) {
		menu.zwierzatko->zabierzDoWeterynarza(wet.wizytauWeterynarza(menu.zwierzatko->zdrowie.getObjaw()));
	}
	else if (menu.odpowiedz == 5) {
		if (menu.zwierzatko->czyZwierzatkoZmeczone() == 1 || menu.zwierzatko->zdrowie.getZdrowie() == "chory") {
			cout << "Zwierzatko nie ma ochoty na zabawe. Upewnij sie ze nie jest chore ani zmeczone."<< endl;
		}
		else {
			pobawSie();
		}
	}
	else if (menu.odpowiedz == 6) {
		cout << "Twoje zwierzatko " << menu.zwierzatko->getImie() << " zostalo poglaskane" << endl;
		if (menu.zwierzatko->getRodzajZwierzatka() == "Pies") {
			menu.zwierzatko->specjalnaUmiejetnosc();
		}
		else {
			menu.zwierzatko->rysujZwierzatko();
		}
		menu.zwierzatko->humor.ustawFajnyHumor();
	}
	else if (menu.odpowiedz == 7) {
		menu.zwierzatko->polozSpac();
		
		
	}
	else if (menu.odpowiedz == 8) {
		menu.zwierzatko->dajJesc();
		cout << "Zwierzatko zosa³o nakarmione" << endl;
	}
	else if (menu.odpowiedz == 9) {
		menu.zwierzatko->specjalnaUmiejetnosc();
	}
	else {
		cout << "Twoja Swinka zostala wykompana." << endl;
		menu.zwierzatko->humor.setHumor("zly");
	}

	return 1;
}



void Gra::graj() {

	menu.wyborPoczatkuGryTekst();
	menu.wyborPoczatkuGry();
	menu.wyborCzynnosciTekst();
	while (wyborCzynnosci()) {
		menu.wyborCzynnosciTekst();
		menu.zwierzatko->zdrowie.wylosujZdrowie();
	}
	menu.zwierzatko->wiek.postarz();
	menu.zapiszDoPliku();

	
}
Gra::~Gra() {
	menu.~Menu();
}