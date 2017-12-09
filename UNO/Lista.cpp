

#include "Lista.h"


#include <iostream>


template <class T>
Lista<T>::Lista() {
	this->primero = nullptr;
	this->longitud = 0;
}

template <class T>
Lista<T>::Lista(const Lista& orig) {
}

template <class T>
Lista<T>::~Lista() {
}

template <class T>
int Lista<T>::longLista() {
	return this->longitud;
}

template <class T>
bool Lista<T>::esVacia() {
	bool value = false;
	if (this->longitud == 0) {
		value = true;
	}
	return value;
}

template <class T>
bool Lista<T>::insertarElem(T e) {
	Nodo<T> *nuevo = new Nodo<T>(e);
	if (nuevo == nullptr) {
		return false;
	}
	else {
		if (this->esVacia()) {
			this->primero = nuevo;
		}
		else {
			nuevo->sig = this->primero;
			primero = nuevo;
		}
		this->longitud++;
		return true;
	}
}

template <class T>
bool Lista<T>::insertarElemAlFinal(T e) {
	Nodo<T> *nuevo = new Nodo<T>(e);
	if (nuevo == nullptr) {
		return false;
	}
	else {
		if (this->esVacia()) {
			this->primero = nuevo;
		}
		else {
			Nodo<T> *aux = this->primero;
			while (aux->sig != NULL) {
				aux = aux->sig;
			}
			aux->sig = nuevo;
		}
		this->longitud++;
		return true;
	}
}

template <class T>
bool Lista<T>::estaEnLista(T e) {
	Nodo<T> *aux;
	int pos;
	bool value = false;
	for (aux = this->primero, pos = 1; aux != NULL; aux = aux->sig, pos++) {
		if (aux->info == e) {
			value = true;
		}
	}
	return value;
}

template <class T>
bool Lista<T>::eliminarValor(T e) {
	bool value = false;
	Nodo<T> *aux = this->primero;
	Nodo<T> *prev = aux;
	while (aux->sig != NULL) {
		if (aux->info == e) {
			prev->sig = aux->sig;
			delete aux;
			return value;
		}
		prev = aux;
		aux = aux->sig;
	}
	return value;
}

template <class T>
bool Lista<T>::eliminarPosicion(int i) {
	int pos = 1;
	bool value = false;
	Nodo<T> *aux = this->primero;
	Nodo<T> *prev = aux;
	while (aux->sig != NULL) {
		if (i == 1) {
			this->primero = aux->sig;
			delete aux;
			return value;
		}
		else if (pos == i) {
			prev->sig = aux->sig;
			delete aux;
			return value;
		}
		prev = aux;
		aux = aux->sig;
		pos++;
	}
	return value;
}

template <class T>
T Lista<T>::primeroLista() {
	return this->primero->info;
}

template <class T>
T Lista<T>::ultimoLista() {
	if (this->esVacia()) {
		return 0;
	}
	else {
		Nodo<T> *aux = this->primero;
		while (aux->sig != NULL) {
			aux = aux->sig;
		}
		return aux->info;
	}
}

template <class T>
int Lista<T>::posElemento(T e) {
	Nodo<T> *aux;
	int pos;
	for (aux = this->primero, pos = 1; aux != NULL; aux = aux->sig, pos++) {
		if (aux->info == e) {
			return pos;
		}
	}
	if (aux == 0) {
		pos = -1;
	}
	return pos;
}



template <class T>
void Lista<T>::recorrer() {
	Nodo<T> *auxRecorrido = this->primero;
	int index = 0;
	while (index <= this->longitud && auxRecorrido != nullptr) {
		std::cout << auxRecorrido->info;
		std::cout << "->";
		auxRecorrido = auxRecorrido->sig;
		index++;
	}
	std::cout << "Final";
}
