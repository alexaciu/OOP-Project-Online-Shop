#pragma once
#include "persoana.h"
#include <vector>
#include "Produs.h" 

class Client :	public Persoana

{
private:
	unsigned int codClient;
	std::vector<Produs> cos;

public:

	Client();
	Client(string numePersoana, string localitate, string data_nasterii);
	~Client();


	unsigned int getCodClient();

	void adaugareProdusInCos(Produs produs);
	void vizualizareCos();
	void stergeProdusDinCos(string nume);
	std::vector<Produs> getCos();
};

