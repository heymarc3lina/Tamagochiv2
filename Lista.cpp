#include "Lista.h"

Lista::Lista() {
	glowa = nullptr;
}

Lista::~Lista() {
	listaZabawek *pomoc = glowa;
	while (pomoc) {
		pomoc = glowa->next;
		delete glowa;
		glowa = pomoc;
	}
}

void Lista::dodajDoListyZabawek(string rodzajZabawki,string kolor,bool zepsute,int zurzycie) {
	Zabawka zabawka = Zabawka(rodzajZabawki, kolor, zepsute, zurzycie);
	glowa = new listaZabawek{ zabawka, glowa };
}

void Lista::dodajDoListyZabawek(Zabawka zabawka) {
	
	glowa = new listaZabawek{ zabawka, glowa };
}

int Lista::wypiszListe() {
	if (glowa) {
		int opcja = 1;
		cout << "Oto lista zabawek." << endl;
		listaZabawek * pomoc = glowa;
		while (pomoc) {
			cout << "Numer " << opcja << endl;
			pomoc->zabawka.wypiszRodzajKolor();
			pomoc = pomoc->next;
			opcja++;
		}
		return opcja;
	}
	else {
		cout << "Lista jest pusta." << endl;
	}
	return 0;
}

Lista &Lista::operator+=(zabawka atrybuty){
	dodajDoListyZabawek(atrybuty.rodzajZabawki, atrybuty.kolor, atrybuty.zepsute, atrybuty.zurzycie);
	return *this;
}


void Lista::zapiszDoPliku(string nazwaPliku) {
	ofstream plik(nazwaPliku);
	if (plik) {
		plik << this->glowa;
		
		plik.close();
	}
}
void Lista::zaladujzPliku(string nazwa) {
	ifstream plik(nazwa);
	if (plik) {
		plik >> *this;
		plik.close();
	}
}

ostream &operator<<(ostream & stream, listaZabawek *glowa) {
	listaZabawek *pomoc = glowa;
	while (pomoc) {
		stream << pomoc->zabawka.getKolor() << " " << pomoc->zabawka.getRodzajZabawki() <<  " " << pomoc->zabawka.getZepsucie() << " " << pomoc->zabawka.getZurzycie() << endl;
		pomoc = pomoc->next;
	}
	return stream;
}

istream &operator>>(std::istream & stream, Lista &lista) {
	zabawka pomoc;
	while (stream >> pomoc.kolor >> pomoc.rodzajZabawki >> pomoc.zepsute >> pomoc.zurzycie){
		lista += pomoc;
		
	}

	return stream;
}

void Lista::usunElement(Zabawka zabawka) {
	if (glowa) {
		if (zabawka == glowa->zabawka) {
			listaZabawek * nastepnikNowy = glowa->next;
			delete glowa;
			glowa = nastepnikNowy;
		}

		else {
			listaZabawek * pomoc = glowa;
			while (pomoc->next && !(zabawka == pomoc->next->zabawka)) {
				pomoc = pomoc->next;
			}

			listaZabawek * nastepnikNowy = pomoc->next->next;
			delete pomoc->next;
			pomoc->next = nastepnikNowy;
		}
	}
}

bool Lista::sprawdzCzyIstnieje(Zabawka zabawka) {
	if (glowa) {
		listaZabawek * pomoc = glowa;
		while (pomoc) {
			if (zabawka == glowa->zabawka) {
				return 1;
			}
			pomoc = pomoc->next;
		}
	}
	return 0;
}

Zabawka Lista:: znajdzZabawke(int odpowiedz) {

	auto pomoc = glowa;
	for (int i = 0; i < odpowiedz - 1; i++) {
		pomoc = pomoc->next;
	}
	return  pomoc->zabawka;


}
Zabawka & Lista::znajdzZabawkewMojejLiscie(int odpowiedz) {

	auto pomoc = glowa;
	for (int i = 0; i < odpowiedz - 1; i++) {
		pomoc = pomoc->next;
	}
	return  pomoc->zabawka;


}

int Lista::getDlugosc() {
	if (glowa) {
		int opcja = 1;
		listaZabawek * pomoc = glowa;
		while (pomoc) {
			pomoc = pomoc->next;
			opcja++;
		}
		return opcja;
	}
	
	return 0;
}

//metoda sprawdza czy jest mozliwosc dodania do niej elementu pod wzgledem dlugosci jak i czy elementy listy sie nie zdubluja po dodaniu
void Lista::naszaListaZabawek(Zabawka zabawka) {
	if (getDlugosc() <= 3) {
		if(sprawdzCzyIstnieje(zabawka) == 0){
			dodajDoListyZabawek(zabawka);
		}
		else {
			cout << "Posiadasz juz taka zabawke, a wiec nie mozesz jej kupic." << endl;
		}
	}
	else {
		cout << "Twoja lista ma juz maksymalna liczbe zabawek." << endl;
	}
}