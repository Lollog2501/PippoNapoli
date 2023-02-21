#include "CCellulare.h"

CCellulare::CCellulare(int sms, int chiamata,int  secondi)
{
	this->sms = sms;
	this->chiamata = chiamata;
	this->secondi = secondi;
}

int CCellulare::Sms(int livello)
{
	return livello - sms;
}

int CCellulare::Chiamata(int livello)
{
	int resto = secondi / 10;
	if (resto >= 5) {
		livello - 1;
	}
	else {
	}
	return livello - (secondi / 5);
}
