#include "ClientPremium.h"

ClientPremium::ClientPremium() : Client(), voucher(false), valoareVoucher(0) {}

ClientPremium::ClientPremium(string numePersoana, string localitate, string data_nasterii, unsigned int codClient, bool voucher, int valoareVoucher) : 
	Client(numePersoana, localitate, data_nasterii),
	voucher(voucher), valoareVoucher(valoareVoucher)
{
}

ClientPremium::~ClientPremium()
{
}

bool ClientPremium::isVoucher()
{
	return voucher;
}

void ClientPremium::setVoucher(bool voucher)
{
	this->voucher = voucher;
}

int ClientPremium::getValoareVoucher()
{
	return valoareVoucher;
}

void ClientPremium::setValoareVoucher(int valoareVoucher)
{
	this->valoareVoucher = valoareVoucher;
}
