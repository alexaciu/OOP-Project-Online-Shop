#pragma once
#include "persoana.h"

class Angajat : public Persoana

{
	float salariu;
	int vechime;

public:

	Angajat();
	Angajat(string numePersoana, string localitate, string data_nasterii, float salariu, int vechime);
	~Angajat();


	float getSalariu();
	void setSalariu(float salariu);
	int getVechime();
	void setVechime(int vechime);

};

