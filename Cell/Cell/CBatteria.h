#pragma once
class CBatteria
{

private:

	int capacita, livello;

public:

	CBatteria();

	void setCapacita(int capacita);
	void setLivello(int livello);

	int getLivello(int livello);
};