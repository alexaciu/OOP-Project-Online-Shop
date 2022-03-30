#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Persoana
{

	string numePersoana;
	string localitate;
	string dataNasterii;

public:
	Persoana();
	Persoana(string numePersoana, string localitate, string data_nasterii);
	Persoana(const Persoana& p);
	~Persoana();
	void operator=(Persoana p);

	string getNume();
	void setNume(string numePersoana);
	string getLocalitate();
	void setLocalitate(string localitate);
	string getDataNasterii();
	void setDataNasterii(string dataNasterii);

	friend istream& operator>>(istream& intrare, Persoana& p);
	friend ostream& operator<<(ostream& iesire, Persoana p);

	friend ifstream& operator>>(ifstream& intrare, Persoana& p);
	friend ofstream& operator<<(ofstream& iesire, Persoana p);

};

