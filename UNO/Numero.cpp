#include "stdafx.h"
#include "Numero.h"



Numero::Numero(int pnumero, Carta::Color pcolor)
	:Carta::Carta(pcolor)
{
}


Numero::~Numero()
{
}

int Numero::getNumero()
{
	return numero;
}

void Numero::setNumero(int e)
{
	numero = e;
}
