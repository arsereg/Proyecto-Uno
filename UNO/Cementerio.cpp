#include "stdafx.h"
#include "Cementerio.h"


Cementerio::Cementerio() {
	this->cementerioCartas = new Cola<Carta>;
}


Cementerio::~Cementerio() {
}

void Cementerio::ponerCarta(Carta cartanueva) {
	this->cementerioCartas->insertarElem(cartanueva);
}
Mazo Cementerio::darVuelta() {
	//repetir x cuantas cartas haya
	this->cementerioCartas->insertarElem(this->cementerioCartas->atender());
}
