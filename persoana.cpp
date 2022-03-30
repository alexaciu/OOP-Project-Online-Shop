#include "persoana.h"

Persoana::Persoana()
{
    this->numePersoana = "Anonim";
    this->localitate = "Necunoscuta";
    this->dataNasterii = "Necunoscuta";

}

Persoana::Persoana(string numePersoana, string localitate, string dataNasterii)
{
    this->numePersoana = numePersoana;
    this->localitate = localitate;
    this->dataNasterii = dataNasterii;
}

Persoana::Persoana(const Persoana& p)
{
    this->numePersoana = p.numePersoana;
    this->localitate = p.localitate;
    this->dataNasterii = p.dataNasterii;
}

Persoana::~Persoana()
{
}

void Persoana::operator=(Persoana p)
{
    this->numePersoana = p.numePersoana;
    this->localitate = p.localitate;
    this->dataNasterii = p.dataNasterii;
}

string Persoana::getNume()
{
    return numePersoana;
}

void Persoana::setNume(string numePersoana)
{
    this->numePersoana = numePersoana;
}

string Persoana::getLocalitate()
{
    return localitate;
}

void Persoana::setLocalitate(string localitate)
{
    this->localitate = localitate;
}

string Persoana::getDataNasterii()
{
    return dataNasterii;
}

void Persoana::setDataNasterii(string dataNasterii)
{
    this->dataNasterii = dataNasterii;
}

istream& operator>>(istream& intrare, Persoana& p)
{
    cout << "Nume persoana: ";
    char buffer[50];
    intrare.getline(buffer, 50);
    p.numePersoana=buffer;
    cout << "Localitatea: ";
    intrare >> p.localitate;
    cout << "Data nasterii: ";
    intrare >> p.dataNasterii;

    return intrare;
}

ostream& operator<<(ostream& iesire, Persoana p)
{
    iesire << "Nume: " << p.numePersoana << endl << "Localitatea: " << p.localitate << endl << "Data nasterii: " << p.dataNasterii << endl;

    return iesire;
}

ifstream& operator>>(ifstream& intrare, Persoana& p)
{
    char buffer[50];
    intrare.getline(buffer, 50);
    p.numePersoana = buffer;
    intrare >> p.localitate;
    intrare >> p.dataNasterii;

    return intrare;
}

ofstream& operator<<(ofstream& iesire, Persoana p)
{
    const char* aux = p.numePersoana.c_str();
    iesire.write(aux, strlen(aux) + 1);
    iesire << endl;
    iesire << p.localitate;
    iesire << endl;
    iesire << p.dataNasterii;
    iesire << endl;


    return iesire;
}
