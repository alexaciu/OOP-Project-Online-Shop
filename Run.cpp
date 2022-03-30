#include "Run.h"

void Run::runClient(Client client)
{
	while (true) {
		string actiune;
		showClientMenu();
		getline(cin, actiune);
		int ret = userHandler.parseClientCommands(client, actiune);
		if (ret == -1) {
			break;
		}
		else if (ret == -2) {
			cout << "Va rog introduceti o comanda valida" << endl;
		}
	}
}

void Run::runAngajat(Angajat angajat)
{
	while (true) {
		string actiune;
		showAngajatMenu();
		getline(cin, actiune);
		int ret = userHandler.parseAngajatCommands(angajat, actiune);
		if (ret == -1) {
			break;
		}
		else if (ret == -2) {
			cout << "Va rog introduceti o comanda valida" << endl;
		}
	}
}

void Run::showClientMenu()
{
	cout << endl;
	cout << "Actiuni posibile: " << endl;
	cout << "ViewAllMagazin | ViewAllCos" << endl;
	cout << "AddProd | DelProd" << endl;
	cout << "AddDatePersonale" << endl;
	cout << "TrimiteComanda" << endl;
	cout << "Iesire" << endl;
	cout << endl;
}

void Run::showAngajatMenu()
{
	cout << endl;
	cout << "Actiuni posibile: (tastati identic)" << endl;
	cout << "AddProdus | EditProdus | DelProdus | ViewAll" << endl;
	cout << "Raport | ViewComenzi" << endl;
	cout << "Iesire" << endl;
	cout << endl;
}

void Run::initMagazin()
{
	magazin.adaugaProdus(Produs{ "carne", 1.43 });
	magazin.adaugaProdus(Produs{ "mici", 1.13 });
	magazin.adaugaProdus(Produs{ "televizor", 1.13 });
}