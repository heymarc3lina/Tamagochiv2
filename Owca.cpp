#include "Owca.h"


Owca::Owca(string nazwa) :Zwierzatko(nazwa) {
	ogolona = 0;
}

Owca& Owca ::operator=(const Owca& owca) {
	if (this == &owca) {
		return *this;
	}

	this->imie = owca.imie;
	this->humor = owca.humor;
	this->wiek = owca.wiek;
	this->zdrowie = owca.zdrowie;

	return *this;

}

string Owca::getRodzajZwierzatka() {
	return rodzajZwierzatka;
}

void Owca::rysujZwierzatko() {
	cout << "               ,@;@,		" << endl;
	cout << "    ,@;@;@;@;@;@/ )@;@;		" << endl;
	cout << "  ,;@;@;@;@;@;@|_/@' e\		" << endl;
	cout << " (|@;@:@\@;@;@;@:@(    \	" << endl;
	cout << "   '@;@;@|@;@;@;@;'`'--'	" << endl;
	cout << "    '@;@;/;@;/;@;' 			" << endl;
	cout << "     ) //   | ||			" << endl;
	cout << "     \ \\   | ||			" << endl;
	cout << "      \ \\  ) \\  			" << endl;
	cout << "       `'`  `'``			" << endl;
}

void Owca::dajGlos() {
	cout << "Mee!" << endl;
	cout << "               ,@;@,		" << endl;
	cout << "    ,@;@;@;@;@;@/ )@;@;	Meeee	" << endl;
	cout << "  ,;@;@;@;@;@;@|_/@' e\		" << endl;
	cout << " (|@;@:@\@;@;@;@:@(    \	" << endl;
	cout << "   '@;@;@|@;@;@;@;'`'--'	" << endl;
	cout << "    '@;@;/;@;/;@;' 			" << endl;
	cout << "     ) //   | ||			" << endl;
	cout << "     \ \\   | ||			" << endl;
	cout << "      \ \\  ) \\  			" << endl;
	cout << "       `'`  `'``			" << endl;
}

void Owca::pobawSieObrazek() {
	cout << "	           .-~```~.				  " << endl;
	cout << "                 /        \			  " << endl;
	cout << "       _._..._ _{_,        }__,		  " << endl;
	cout << "   __.'~     {`---'        }-'		  " << endl;
	cout << "  / /         `--'      9  \		  " << endl;
	cout << "  \{            `~.      .__y		  " << endl;
	cout << "   { {             `~~----;`		  " << endl;
	cout << "   \  \                }=/=.		  " << endl;
	cout << "    {  `._\      ,    }@*@			  " << endl;
	cout << "    \   }`~\   _.~'.  \`@`			  " << endl;
	cout << "     {  }  {  } \   \  \			  " << endl;
	cout << "     /  }  {  |  \   \  \			  " << endl;
	cout << "    /`-/   /  }`-'\   {  \			  " << endl;
	cout << "    `'`   /  / `--`    \.-\			  " << endl;
	cout << "         /`'/           `--`		  " << endl;
	cout << "         `'`						  " << endl;
}

void Owca::specjalnaUmiejetnosc() {
	cout << "Twoje zwierzatko " << getImie() << " zostalo ogolone" << endl;
	cout << "          ()			  " << endl;
	cout << "     .-'''''-.			  " << endl;
	cout << "    /         \\		  " << endl;
	cout << "   /           \\		  " << endl;
	cout << "  /(`\\       /`)\\	  " << endl;
	cout << "  |   \\.-'-./   |		  " << endl;
	cout << "   \\ (/ o o \\) /		  " << endl;
	cout << "   |\\ |     | /		  " << endl;
	cout << "   ||\\ \\_Y_/ /		  " << endl;
	cout << "   WW |.___.|			  " << endl;
	cout << "      ||   || 			  " << endl;
	cout << "      ||   ||			  " << endl;
	cout << "      WW   WW			  " << endl;
	cout << "       `'`  `'`` 		  " << endl;
	humor.setHumor("zly");
	okreslHumor();
}

void Owca::dajJesc() {
	okreslHumor();
	cout << "         _,=~~~~=,_			 " << endl;
	cout << "      .~          ~.			 " << endl;
	cout << "     /              \\			 " << endl;
	cout << "    /  /          \\  \\		 " << endl;
	cout << "   { {`|  0    0  |`} }			 " << endl;
	cout << "   `'-`|          |`-'`			 " << endl;
	cout << "       |          |				 " << endl;
	cout << "       \\    \\/    /			 " << endl;
	cout << "      ( '.      .' )			 " << endl;
	cout << "       '. `~()~` .'				 " << endl;
	cout << "         `'(  )'`				 " << endl;
	cout << "          /    \\				 " << endl;
	cout << "          `'=='`				 " << endl;
}
