#include "Weterynarz.h"



bool Weterynarz::wizytauWeterynarza(string objawy) {
	poczekajwKolejce();
	return proceduraLeczenia(zbadajZwierzatko(objawy));

}

void Weterynarz::poczekajwKolejce() {
	cout << "Witaj w przychodni Weterynaryjnej. " << endl;
	int sekundy = Losowanie::wylosujLiczbezPodanegoPrzedzialu(5,15);

	cout << "Niestety sa przed Toba inni pacjenci. Musisz zaczekac. " << sekundy << " sekund." << endl;
	Sleep(sekundy*1000);
	cout << "Weterynarz zaprasza Cie do gabinetu :)" << endl;
}


int Weterynarz::zbadajZwierzatko(string objawy) {
	cout << "Weterynarz bada zwierzatko." << endl;
	if (objawy == "Brak") {
		cout << "Zwierzatko nie ma zadnych objawow." << endl;
		return 0;
	}
	if (Losowanie::wylosujLiczbezPodanegoPrzedzialu(0, 9) > 0) {
		if (objawy == "Zwierzatko sie duzo drapie.") {
			cout << "Zwierzatko ma zapalenie skory." << endl;
			return 1;
		}
		else if (objawy == "Zwierzatko wymiotuje.") {
			cout << "Zwierzatko ma zapalenie zoladka." << endl;
			return 2;
		}
		else {
			cout << "Zwierzatko  ma zapalenie spojowek." << endl;
			return 3;
		}
	}
	else {
		cout << "Zwierzatka nie udalo sie zbadac. Przyj jak najszybciej." << endl;
		return 4;
	}
}


bool Weterynarz::proceduraLeczenia(int opcjaLeczenia) {
	if (opcjaLeczenia == 0) {
		cout << "Zwierzatko jest zdrowe. Nie trzeba go leczyc."<< endl;
		return 1;
	}
	else if (opcjaLeczenia == 1) {
		cout << "Zwierzatko zostalo wykapane w leczniczym szamponie." << endl;
	}
	else if (opcjaLeczenia == 2) {
		cout << "Weterynarz podal ziolowe krople na zoladek." << endl;
	}
	else if(opcjaLeczenia == 3) {
		cout << "Weterynarz podal specjalne kropelki na oczy." << endl;
	}
	else {
		cout << "Niestety zwierzatko nie zostalo wyleczone." << endl;
		return 0;
	}
	
	cout << "Zwierzatko jest juz zdrowe." << endl;
	return 1;
}