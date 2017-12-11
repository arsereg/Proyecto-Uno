#include "stdafx.h"
#include "Mazo.h"


Mazo::Mazo() {
	this->cartasPila = new Pila<Carta>;
}


Mazo::~Mazo() {
}

Carta Mazo::sacarCarta() {
	return this->cartasPila->pop();
}

void Mazo::ponerCarta(Carta x) {
	this->cartasPila->push(x);
}
