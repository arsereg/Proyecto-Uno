#pragma once
#include "Carta.h"
class Numero :
	public Carta
{
public:
	Numero(int pnumero, Carta::Color pcolor);
	~Numero();
	int getNumero();
private:
	int numero;
	void setNumero(int e);
};

