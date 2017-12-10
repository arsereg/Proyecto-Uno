// UNO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Numero.h"
#include "Buffer.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main()
{
	Carta * unNumero = new Numero(8, Carta::negro);
	cout << unNumero->getColor() << endl;
	Buffer * buffer = new Buffer();
	buffer->getColaBuffer()->pushElem(unNumero);
	buffer->getColaBuffer()->pushElem(unNumero);
	buffer->calcularCartas();
	std::cout << buffer->getCartasComer() << std::endl;
	int nombre;
	cin >> nombre;
	
}

