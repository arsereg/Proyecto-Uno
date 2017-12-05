#include "stdafx.h"
#include "Carta.h"


Carta::Carta(Color pcolor)
{
	setColor(pcolor);
}

Carta::~Carta()
{
}

Carta::Color Carta::getColor()
{
	return colorCarta;
}

Carta::type Carta::getTipo()
{
	return tipoCarta;
}



void Carta::setColor(Color pcolor)
{
	colorCarta = pcolor;
}
