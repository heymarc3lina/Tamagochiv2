#pragma once
#include <string>
#include "Losowanie.h"

using namespace std;
class Humor {
private:

	string humor;
	
	
	
public:
	Humor();
	inline void setHumor(string humor) {
		this->humor = humor;
	}
	inline string getHumor() {
		return humor;
	};
	
	void ustawFajnyHumor();
	void ustawHumor();
	void zmienZmeczenie();
};