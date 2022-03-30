
#include "Angajat.h"

Angajat::Angajat(): Persoana(), salariu (0), vechime (0){}

Angajat::Angajat(string numePersoana, string localitate, string data_nasterii, float salariu, int vechime) : Persoana(numePersoana, localitate, data_nasterii), salariu(salariu), vechime(vechime)
{
}

Angajat::~Angajat()
{
}

float Angajat::getSalariu()
{
	return salariu;
}

void Angajat::setSalariu(float salariu)
{
	this->salariu= salariu;
}

int Angajat::getVechime()
{
	return vechime;
}

void Angajat::setVechime(int vechime)
{
	this->vechime = vechime;
}
