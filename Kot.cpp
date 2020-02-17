#include "Kot.h"
#include "Zwierzatko.h"


Kot::Kot(string nazwa) : Zwierzatko(nazwa) {

}

Kot& Kot ::operator=(const Kot& kot) {
	if (this == &kot) {
		return *this;
	}

	this->imie = kot.imie;
	this->humor = kot.humor;
	this->wiek = kot.wiek;
	this->zdrowie = kot.zdrowie;

	return *this;

}

void Kot::rysujZwierzatko() {
	cout << "   /\\_____/\\	   " << endl;
	cout << "  /  o   o  \		   " << endl;
	cout << " ( ==  ^  == )		   " << endl;
	cout << "  )         (		   " << endl;
	cout << " (           )		   " << endl;
	cout << "( (  )   (  ) )	   " << endl;
	cout << "__(__)___(__)__)	   " << endl;
}

void Kot::dajGlos() {
	cout << "Miau!" << endl;
	cout << "   /\\___/\\				   " << endl;
	cout << "  /       \\					   " << endl;
	cout << " l  u   u  l					   " << endl;
	cout << "-l----*----l--				   " << endl;
	cout << "  \\   w   /     - Meow!		   " << endl;
	cout << "    ======					   " << endl;
	cout << "  /       \\ __				   " << endl;
	cout << "  l        l\\ \\				   " << endl;
	cout << "  l        l/ /   			   " << endl;
	cout << "  l  l l   l /				   " << endl;
	cout << "  \\ ml lm /_/ " << endl;
}

void Kot::dajJesc() {
	okreslHumor();
	cout << "   |\=/|.-'''-.  	 " << endl;
	cout << "    /6 6\\      \	 " << endl;
	cout << "   =\_Y_/=  (_  ;\	 " << endl;
	cout << "     _U//_/-/__///	 " << endl;
	cout << "    /kit\\     ((	 " << endl;
	cout << "    ^^^^^       `	" << endl;
}

void Kot::pobawSieObrazek() {
	cout << "                   __     __,					 " << endl;
	cout << "                    \\,`~''~` /					 " << endl;
	cout << "    .-=-.           /    . .\\					 " << endl;
	cout << "   / .-. \\          {  =    Y}=				 " << endl;
	cout << "  (_/   \\ \\          \\      / 				 " << endl;
	cout << "         \\ \\        _/`'`'`b					 " << endl;
	cout << "          \\ `.__.-'`        \\-._				 " << endl;
	cout << "           |            '.__ `'-;_				 " << endl;
	cout << "           |            _.' `'-.__)			 " << endl;
	cout << "            \\    ;_..--'/     //  \\			 " << endl;
	cout << "            |   /  /   |     //    |			 " << endl;
	cout << "            \\  \\ \\__)   \\   //    /		 " << endl;
	cout << "             \\__)        './/   .'			 " << endl;
	cout << "                           `'-'`				 " << endl;
}


string Kot::getRodzajZwierzatka() {

	return rodzajZwierzatka;
}

void Kot::specjalnaUmiejetnosc() {
	cout << "     _							" << endl;
	cout << " \\								" << endl;
	cout << "\\ \\								" << endl;
	cout << "/ /                |\\\\			" << endl;
	cout << " /     .-`````-.   / ^`-.			" << endl;
	cout << "\ \\    /         \\_/  {|} `o		" << endl;
	cout << "\\ \\  /   .---.   \\\\ _  ,--'	" << endl;
	cout << " \\ \\/   /     \\,  \\( `^^^		" << endl;
	cout << "  \\   \\/\\      (\\  )			" << endl;
	cout << "   \\   ) \\     ) \\ \\			" << endl;
	cout << "    ) /__ \\__  ) (\\ \\___		" << endl;
	cout << "   (___)))__))(__))(__)))			" << endl;
}