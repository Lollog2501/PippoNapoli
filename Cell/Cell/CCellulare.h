#pragma once
#include "CBatteria.h"

class CCellulare
{
private:

	int sms, chiamata, secondi;

public:

	CCellulare(int sms, int chiamata, int  secondi);

	int Sms(int livello);
	int Chiamata(int livello);


};

