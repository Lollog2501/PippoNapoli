#include "CBatteria.h"

CBatteria::CBatteria()
{
	setCapacita(capacita);
	setLivello(livello);
}

void CBatteria::setCapacita(int capacita)
{
	capacita = 100;
}

void CBatteria::setLivello(int livello)
{
	livello = 100;
}

int CBatteria::getLivello(int livello)
{
	return livello;
}
