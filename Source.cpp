#include<iostream>

#include "persoana.h";
#include "Produs.h"
#include "Magazin.h"
#include "UserHandler.h"
#include "Client.h"
#include "Run.h"
using namespace std;

int main()
{
	Run run;
	string tipUtilizator;
	Angajat angajat;
	Client client;
	cout << "Buna ziua, ce tip de utilizator sunteti? client sau angajat ? (tastati identic)" << endl;
	getline(cin, tipUtilizator);
	run.initMagazin();
	if (tipUtilizator == "angajat") {
		run.runAngajat(angajat);
	}
	if (tipUtilizator == "client") {
		run.runClient(client);
	}
	
}