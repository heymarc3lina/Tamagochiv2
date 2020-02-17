#include "Wiek.h"
Wiek::Wiek(){
    godzina = 0;
    minuty = 0;
    sekudny = 0;
    time = clock();
}

void Wiek::zresetujWiek() {
	godzina = 0;
	minuty = 0;
	sekudny = 0;
}

void Wiek:: podajIleCzasuUplyneloOdStworzenia() {
	postarz();

   cout << "Twoje zwierzatko zyje "<< godzina << ":" << minuty << ":" << sekudny <<" czasu."  << endl;
  
}
void Wiek::postarz() {
	clock_t temp = clock();
	temp += sekudny * 1000 + minuty * 1000 * 60 + godzina * 1000 * 60 * 60;
	zresetujWiek();


	while (temp > 1000 * 60 * 60) {
		temp -= 1000 * 60 * 60;
		godzina++;
	}
	while (temp > 1000 * 60) {
		temp -= 1000 * 60;
		minuty++;
	}
	while (temp > 1000) {
		temp -= 1000;
		sekudny++;
	}
}