#include "Client.h"
#include <time.h>

Client::Client() : Persoana(), codClient(0) {}

Client::Client(string numePersoana, string localitate, string data_nasterii) :
	Persoana(numePersoana, localitate, data_nasterii)
{
	srand(time(NULL));
	codClient = rand() % 100 + 1;
}

Client::~Client()
{
}

unsigned int Client::getCodClient()
{
	return codClient;
}

void Client::adaugareProdusInCos(Produs produs)
{
	cos.push_back(produs);
}

void Client::vizualizareCos()
{
	for (int i = 0; i < cos.size(); i++) {
		cout << cos[i] << endl;
	}
}

void Client::stergeProdusDinCos(string nume)
{
	int index = -1;
	for (int i = 0; i < cos.size(); i++) {
		if (cos[i].getDenumireProdus() == nume) {
			index = i;
		}
	}
	if (index != -1) {
		cos.erase(cos.begin() + index);
	}
}

std::vector<Produs> Client::getCos()
{
	return cos;
}

