#pragma once
#include "Pila.h"
#include "Carta.h"
class Mazo
{
private:
	Pila<Carta>* cartasPila;
public:
	Mazo();
	~Mazo();
	Carta sacarCarta();
};

