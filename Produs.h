#pragma once
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Produs

{
private:
	string denumireProdus;
	float pretProdus;
public:
	Produs();
	Produs(string denumireProdus, float pretProdus);
	Produs(const Produs& prod);
	~Produs();
	void operator=(Produs prod);

	bool operator<(Produs& prod);
	Produs& operator+(Produs prod);
	friend int operator-(int x, Produs prod);

	friend istream& operator>>(istream& intrare, Produs& prod);
	friend ostream& operator<<(ostream& iesire, Produs prod);

	friend ifstream& operator>>(ifstream& intrare, Produs& prod);
	friend ofstream& operator<<(ofstream& iesire, Produs prod);

	string getDenumireProdus();
	float getPretProdus();

};

