#pragma once
#include "Client.h"

class ClientPremium : public Client

{
	bool voucher;
	int valoareVoucher;

	ClientPremium();
	ClientPremium(string numePersoana, string localitate, string data_nasterii, unsigned int codClient, bool voucher, int valoareVoucher);
	~ClientPremium();

	bool isVoucher();
	void setVoucher(bool voucher);
	int getValoareVoucher();
	void setValoareVoucher(int valoareVoucher);

};

