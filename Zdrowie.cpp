#include "Zdrowie.h"


Zdrowie::Zdrowie() {
	zdrowy = 1;
	objawy = "Brak";
}

void Zdrowie::wylosujObjawy() {
	
	int losowe = Losowanie::wylosujLiczbezPodanegoPrzedzialu(1, 3);

	if (losowe == 1) {
		setObjawy("Zwierzatko sie duzo drapie.");
	}
	else if (losowe == 2) {
		setObjawy("Zwierzatko wymiotuje.");
	}
	else {
		setObjawy("Zwierzatko ma zaczerwienione oczy.");
	}

}

void Zdrowie::wylosujZdrowie() {
	if (getZdrowie() == "zdrowy") {
		int losowe = Losowanie::wylosujLiczbezPodanegoPrzedzialu(1, 30);

		if (losowe % 10 == 0) {
			setZdrowie(0);
			wylosujObjawy();
		}
	}
}