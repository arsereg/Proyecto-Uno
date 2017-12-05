#pragma once
class Carta
{
public:
	enum Color {rojo, verde, azul, amarillo, negro};
	enum type {numero, especial};
	Carta(Color e);
	~Carta();
	Color getColor();
	type getTipo();
protected:
	
	type tipoCarta;
	Color colorCarta;
	void setColor(Color);
	void setTipo();
};

