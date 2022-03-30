#pragma once
#include "angajat.h"
#include "Client.h"
#include "Magazin.h"
#include "angajat.h"
#include <iostream>
#include <string>
#include "ComenziHandler.h"



class UserHandler
{
private:
	Magazin& magazin = Magazin::getInstance();
	ComenziHandler comenziHandler;
	bool clientInfoComplete = false;

public:
	int parseClientCommands(Client& client, string comanda);
	int parseAngajatCommands(Angajat& angajat, string comanda);
	double readDouble();


};

