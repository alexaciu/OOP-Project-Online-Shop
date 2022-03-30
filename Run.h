#pragma once
#include "Magazin.h"
#include "Client.h"
#include "angajat.h"
#include <iostream>
#include "UserHandler.h"
class Run
{
private:
	Magazin& magazin = Magazin::getInstance();
	UserHandler userHandler;
	void showClientMenu();
	void showAngajatMenu();
public:
	void runClient(Client client);
	void runAngajat(Angajat angajat);
	void initMagazin();

};

