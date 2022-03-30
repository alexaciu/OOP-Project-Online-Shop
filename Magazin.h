#pragma once
#include <vector>
#include "Produs.h"
#include<string.h>

class Magazin
{
public:
	static Magazin& getInstance()
	{
		static Magazin instance;
		return instance;
	}
private:
    Magazin() {}

private:
	std::vector<Produs> produse;

public:
	void adaugaProdus(Produs produs);
	void stergereProdus(std::string numeProdus);
	void editareProdus(std::string numeProdus, Produs produs);

	void afisareProdus(std::string numeProdus);
	void afisareToateProuduse();

	Produs gasireDupaNume(std::string numeProdus);
};

