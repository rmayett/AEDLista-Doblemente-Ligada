/*Rodrigo Mayett Guzman
E programa define los atributos
 y constructores del nodo*/
#include <iostream>

class Nodo
{
private://atributos
	int Dato;
	Nodo* Sig;
	Nodo* Ant;
public://constructores
	Nodo(int Dato, Nodo* Ant, Nodo* Sig);
	Nodo(int Dato);
	void setDato(int Dato);
	void setSig(Nodo* Sig);
	void setAnt(Nodo* Ant);
	int getDato();
	Nodo* getSig();
	Nodo* getAnt();
	//~Nodo();
};