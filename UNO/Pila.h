#pragma once
#ifndef PILA_H
#define PILA_H
#include "Nodo.h"

template <class T>
class Pila {
public:
	Pila();
	Pila(const Pila& orig);
	virtual ~Pila();
	int longPila();
	bool esVacia();
	bool push(T x);
	bool estaEnPila(T x);
	bool eliminarValor(T x);
	bool eliminarPosicion(int i);
	T pop();
	int posElemento(T x);
	void recorrer();

private:
	int longitud;
	Nodo<T> *primero;
	Nodo<T> *ultimo;

};

#endif /* PILA_H */
