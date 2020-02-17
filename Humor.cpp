#include "Humor.h"


Humor::Humor() {
	humor = "bardzo dobry";
	
}


void Humor::ustawFajnyHumor() {
	string humory[] = { "bardzoDobry",  "glodny",  "spragniony",  "zmeczony" };
	int liczba = Losowanie::wylosujLiczbezPodanegoPrzedzialu(0, 3);
	if (getHumor() != "zmeczony") {
		setHumor(humory[liczba]);
	}

}

void Humor::ustawHumor() {
	string humory[] = { "bardzoDobry", "sredni", "zly", "glodny", "smutny", "spragniony", "znudzony", "zmeczony" };
	
	if (getHumor() != "zmeczony") {
		 setHumor(humory[Losowanie::wylosujLiczbezPodanegoPrzedzialu(0,7)]);
	}
	
}

void Humor::zmienZmeczenie() {
	string humory[] = { "bardzoDobry", "sredni", "zly", "glodny", "smutny", "spragniony", "znudzony" };

	setHumor(humory[Losowanie::wylosujLiczbezPodanegoPrzedzialu(0, 6)]);

}