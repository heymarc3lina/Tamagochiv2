#include <iostream>
#include "Gra.h"

int main() {

	Gra gra = Gra();
	gra.graj();
	delete gra.menu.zwierzatko;
	gra.~Gra();
	


	return 0;
}
