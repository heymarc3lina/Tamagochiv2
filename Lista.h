#ifndef LIST_H
#define LIST_H
#include "Zabawka.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct zabawka {
	string rodzajZabawki;
	string kolor;
	bool zepsute;
	int zurzycie;
};

struct listaZabawek {
	Zabawka  zabawka;
	listaZabawek * next;
};

class Lista {
public:
	listaZabawek *glowa;
	Lista();
	~Lista();
	void zaladujzPliku(string nazwa);
	void dodajDoListyZabawek(string rodzajZabawki, string kolor, bool zepsute, int zurzycie);
	void dodajDoListyZabawek(Zabawka zabawka);
	bool sprawdzCzyIstnieje(Zabawka zabawka);
	int wypiszListe();
	//bool operator>(int val);
	void zapiszDoPliku(string nazwaPliku);
	void usunElement(Zabawka zabawka);
	Lista &operator+=(zabawka atrybuty);
	friend ostream &operator<<(std::ostream &stream, listaZabawek *glowa);
	friend istream &operator>>(std::istream &stream, Lista &list);
	Zabawka znajdzZabawke(int odpowiedz);
	Zabawka & znajdzZabawkewMojejLiscie(int odpowiedz);
	//bool SprawdzCzyIstnieje();
	//void dodajZabawkiDoGry();
	int getDlugosc();
	void naszaListaZabawek(Zabawka zabawka);

};

#endif