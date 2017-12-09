

#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

template <class T>
class Lista {
public:
	Lista();
	Lista(const Lista& orig);
	virtual ~Lista();
	int longLista();
	bool esVacia();
	bool insertarElem(T x);
	bool insertarElemAlFinal(T x);
	bool estaEnLista(T x);
	bool eliminarValor(T x);
	bool eliminarPosicion(int i);
	T primeroLista();
	T ultimoLista();
	int posElemento(T x);
	void recorrer();

private:
	int longitud;
	Nodo<T> *primero;

};

#endif /* LISTA_H */

