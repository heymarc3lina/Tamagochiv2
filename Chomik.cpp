#include "Chomik.h"


Chomik::Chomik(string nazwa) :Zwierzatko(nazwa) {

}

Chomik & Chomik ::operator=(const Chomik& chomik) {
	if (this == &chomik) {
		return *this;
	}

	this->imie = chomik.imie;
	this->humor = chomik.humor;
	this->wiek = chomik.wiek;
	this->zdrowie = chomik.zdrowie;

	return *this;

}

void Chomik::rysujZwierzatko() {
	cout << "     _           _				" << endl;
	cout << "     (`-`;-'```'-;`-`)			" << endl;
	cout << "      \\\\.'         './			" << endl;
	cout << "      /             \\\\			" << endl;
	cout << "      ;   0     0   ;				" << endl;
	cout << "     /| =         = |\\\\			" << endl;
	cout << "    ; \\\\   '._Y_.'   / ;		" << endl;
	cout << "   ;   `-._ \\\\|/ _.-'   ;		" << endl;
	cout << "  ;        `'''`        ;			" << endl;
	cout << "  ;    `''-.   .-''`    ;			" << endl;
	cout << "  /;  '--._ \\\\ / _.--   ;\\\\	" << endl;
	cout << " :  `.   `/|| ||\\\\`   .'  :		" << endl;
	cout << "  '.  '-._       _.-'   .'        " << endl;
	cout << "  (((-'`  `'''''`   `'-)))		" << endl;
}

void Chomik::dajGlos() {
	cout << "Twoje zwiezatko nie wydaje glosu." << endl;
}

void Chomik::pobawSieObrazek() {
	cout << "      (>\\\\---/<)					   " << endl;
	cout << "          ,'     `.					   " << endl;
	cout << "         /  q   p  \\\\				   " << endl;
	cout << "        (  >(_Y_)<  )					   " << endl;
	cout << "         >-' `-' `-<-.				   " << endl;
	cout << "        /  _.== ,=.,- \\\\			   " << endl;
	cout << "       /,    )`  '(    )				   " << endl;
	cout << "      ; `._.'      `--<				   " << endl;
	cout << "     :     \\\\        |  )			   " << endl;
	cout << "     \\\\      )       ;_/  			   " << endl;
	cout << "      `._ _/_  ___.'-\\\\\\\\\\\\		   " << endl;
	cout << "         `--\\\\\\\\\\\\				   " << endl;
}



void Chomik::dajJesc() {
	okreslHumor();
	cout << "	             c._		  " << endl;
	cout << "     .'````'-'C  o'-.		  " << endl;
	cout << "   _/   \       _..'		  " << endl;
	cout << "  '-\  _/--.<<-'			  " << endl;
	cout << "     `\)     \)  			  " << endl;
}


string Chomik::getRodzajZwierzatka() {

	return rodzajZwierzatka;
}

void Chomik::specjalnaUmiejetnosc() {
	cout << "To zwierzatko nic nie robi" << endl;
}