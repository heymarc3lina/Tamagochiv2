#ifndef ZDROWIE_H_
#define ZDROWIE_H_
#include <string>
#include "Losowanie.h"
#include <random>
using namespace std;

class Zdrowie {
private:
	bool zdrowy;
	string objawy;

public:
	Zdrowie();

	inline string getZdrowie() {
		if (zdrowy == 1) {
			return "zdrowy";
		}
		else {
			return "chory";
		}
	}
	inline bool getZdrowieBool() {
		return zdrowy;
	}

	inline string getObjaw() {
		return objawy;
	}

	inline void setZdrowie(bool zdrowie) {
		this->zdrowy = zdrowie;
	}

	inline void setObjawy(string objawy) {
		this->objawy = objawy;
	}

	void wylosujZdrowie();
	void wylosujObjawy();



};

#endif
