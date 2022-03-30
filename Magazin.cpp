#include "Magazin.h"

void Magazin::adaugaProdus(Produs produs)
{
	produse.push_back(produs);
}

void Magazin::stergereProdus(std::string numeProdus)
{
	int index = -1;
	for (int i = 0; i < produse.size(); i++) {
		if (produse[i].getDenumireProdus() == numeProdus) {
			index = i;
		}
	}
	if (index != -1) {
		produse.erase(produse.begin() + index);
	}
}

void Magazin::editareProdus(std::string numeProdus, Produs produs)
{
	for (int i = 0; i < produse.size(); i++) {
		if (produse[i].getDenumireProdus() == numeProdus) {
			produse[i] = produs;
		}
	}
}

void Magazin::afisareProdus(std::string numeProdus)
{
	for (int i = 0; i < produse.size(); i++) {
		if (produse[i].getDenumireProdus() == numeProdus) {
			cout << produse[i] << endl;
		}
	}
}

void Magazin::afisareToateProuduse()
{
	for (int i = 0; i < produse.size(); i++) {
		cout << produse[i] << endl;
	}
}

Produs Magazin::gasireDupaNume(std::string numeProdus)
{
	for (int i = 0; i < produse.size(); i++) {
		if (produse[i].getDenumireProdus() == numeProdus) {
			return produse[i];
		}
	}
	
}
