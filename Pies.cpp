#include "Pies.h"


Pies::Pies(string nazwa) :Zwierzatko(nazwa) {

}

Pies& Pies ::operator=(const Pies& pies) {
	if (this == &pies) {
		return *this;
	}

	this->imie = pies.imie;
	this->humor = pies.humor;
	this->wiek = pies.wiek;
	this->zdrowie = pies.zdrowie;

	return *this;

}

void Pies::rysujZwierzatko() {
	cout << "          __   " << endl;
	cout << " \ ______/ V`-,   " << endl;
	cout << "  }        /~~	   " << endl;
	cout << " /_)^ --,r'	   " << endl;
	cout << "|b      |b		   " << endl;
}

void Pies::dajGlos() {
	cout << "Hau hau!" << endl;
	cout << "     |\_/|                  	 " << endl;
	cout << "     | @ @   Woof! 			 " << endl;
	cout << "     |   <>              _  	 " << endl;
	cout << "     |  _/\------____ ((| |))	 " << endl;
	cout << "     |               `--' |   	 " << endl;
	cout << " ____|_       ___|   |___.' 	 " << endl;
	cout << "/_/_____/____/_______|			 " << endl;
}

void Pies::pobawSieObrazek() {
	cout << "	 ___				 " << endl;
	cout << " __/_  `.  .-''''-.		 " << endl;
	cout << " \_,` | \-'  /    )`-')	 " << endl;
	cout << "  ''') `'`    \  ((`''	 " << endl;
	cout << " ___Y  ,    .'7 /|		 " << endl;
	cout << "(_,___/...-` (_/_/ 	 " << endl;
}

void Pies::specjalnaUmiejetnosc() {
	cout << "Twoje zwierzatko " << getImie() << " merda do Ciebie ogonkiem" << endl;
	cout << "	   __      _	 " << endl;
	cout << "o-''))____(\\\\)	 " << endl;
	cout << "'--__/ * * * )		 " << endl;
	cout << "c_c__/-c____/		 " << endl;
}

void Pies::dajJesc() {
	okreslHumor();
	cout << "    ,    /-.				" << endl;
	cout << "   ((___/ __>				" << endl;
	cout << "   /      }				" << endl;
	cout << "   \\ .--.(    ___			" << endl;
	cout << "    \\\\   \\\\  /___\\	" << endl;
}


string Pies::getRodzajZwierzatka() {

	return rodzajZwierzatka;
}