#include "stdafx.h"
#include "Carta.h"


Carta::Carta(Color pcolor)
{
	setColor(pcolor);
}

Carta::~Carta()
{
}



void Carta::setColor(Color pcolor)
{
	colorCarta = pcolor;
}
