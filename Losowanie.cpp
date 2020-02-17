#include "Losowanie.h"

int Losowanie::wylosujLiczbezPodanegoPrzedzialu(int liczba1, int liczba2) {
	random_device r;
	default_random_engine e1(r());
	uniform_int_distribution<int> uniform_dist(liczba1, liczba2);
	int losowa = uniform_dist(e1);
	return losowa;
}