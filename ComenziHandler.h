#pragma once

#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include "Produs.h"
#include "Client.h"
#include "angajat.h"

class ComenziHandler
{
public:
	void trimiteComanda(Client client);
	void vizualizareComenzi();
	void raportMagazin();
};

