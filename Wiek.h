#include <iostream>
#include <time.h>
#include <chrono>
using namespace std;

class Wiek {
    int godzina;
    int minuty;
    int sekudny;
    clock_t time;

public:
    Wiek();
	inline int getGodzina() {
		return godzina;
	}
	inline int getMinuta() {
		return minuty;
	}
	inline int getSekunda() {
		return sekudny;
	}
	inline void setGodzinaMinutaSekunda(int godzina, int minuta, int sekunda) {
		this->godzina = godzina;
		minuty = minuta;
		sekudny = sekunda;
	}
	
    void  podajIleCzasuUplyneloOdStworzenia();
	void zresetujWiek();
	void postarz();
};