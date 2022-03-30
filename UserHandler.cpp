#include "UserHandler.h"

int UserHandler::parseClientCommands(Client& client, string comanda)
{
	if (comanda == "ViewAllMagazin") {
		magazin.afisareToateProuduse();
		return 0;
	}

	if (comanda == "ViewAllCos") {
		client.vizualizareCos();
		return 0;
	}

	if (comanda == "AddProd") {
		cout << "Introduceti numele produsului pe care vreti sa il adaugati in cos" << endl;
		string nume;
		getline(cin, nume);
		client.adaugareProdusInCos(magazin.gasireDupaNume(nume));
		cout << client.getCos().size() << endl;
		return 0;
	}

	if (comanda == "DelProd") {
		cout << "Ce produs doriti sa stergeti?" << endl;
		string nume;
		std::getline(cin, nume);
		client.stergeProdusDinCos(nume);
		return 0;
	}

	if (comanda == "AddDatePersonale") {
		cout << "Introduceti Numele" << endl;
		string nume;
		getline(cin, nume);
		cout << "Introduceti Localitate" << endl;
		string localitate;
		getline(cin, localitate);
		cout << "Introduceti Data Nasterii" << endl;
		string data;
		getline(cin, data);

		client.setNume(nume);
		client.setLocalitate(localitate);
		client.setDataNasterii(data);

		clientInfoComplete = true;
		return 0;

	}
	if (comanda == "TrimiteComanda") {
		if (clientInfoComplete)
			comenziHandler.trimiteComanda(client);
		else
			cout << "Va rog completati datele personale" << endl;
		return 0;
	}
	if (comanda == "Iesire") {
		return -1;
	}
	return -2;
}

int UserHandler::parseAngajatCommands(Angajat& angajat, string comanda)
{
	if (comanda == "AddProdus") {
		cout << "Introduceti nume produs" << endl;
		string nume;
		std::getline(cin, nume);
		cout << "Introduceti pret produs" << endl;
		float pret = (float)readDouble();
		magazin.adaugaProdus(Produs{ nume, pret });
		return 0;
	}

	if (comanda == "EditProdus") {
		cout << "Ce produs doriti sa editati?" << endl;
		string nume;
		std::getline(cin, nume);
		cout << "Introduceti pretul nou" << endl;
		float pret = (float)readDouble();
		magazin.editareProdus(nume, Produs{ nume, pret });
		return 0;
	}

	if (comanda == "DelProdus") {
		cout << "Ce produs doriti sa stergeti?" << endl;
		string nume;
		std::getline(cin, nume);
		magazin.stergereProdus(nume);
		return 0;
	}

	if (comanda == "ViewAll") {
		magazin.afisareToateProuduse();
		
		return 0;
	}

	if (comanda == "ViewComenzi") {
		comenziHandler.vizualizareComenzi();
		return 0;
	}

	if (comanda == "Raport") {
		comenziHandler.raportMagazin();
		return 0;
	}
	if (comanda == "Iesire") {
		return -1;
	}
	
	return -2;
}

double UserHandler::readDouble()
{
	double input = -1;
	bool valid = false;
	do
	{
		cin >> input;
		if (cin.good())
		{
			valid = true;
		}
		else
		{
			cout << "Va rog introduceti un numar" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (!valid);

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return input;
	
}
