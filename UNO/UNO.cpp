// UNO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Numero.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main()
{
	Carta * unNumero = new Numero(8, Carta::negro);
	cout << unNumero->getColor() << endl;
}



