#include "Nodo.h"

Nodo::Nodo(int Dato , Nodo* Ant , Nodo* Sig)
{
	this->Dato = Dato;
	this->Ant = Ant;
	this->Sig = Sig;	
}

Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Ant = NULL;
	this->Sig = NULL;
}

void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}

void Nodo::setAnt(Nodo* Ant)
{
	this->Ant = Ant;
}

void Nodo::setSig(Nodo* Sig)
{
	this->Sig = Sig;
}

int Nodo::getDato()
{
	return this->Dato;
}

Nodo* Nodo::getAnt()
{
	return this->Ant;
}

Nodo* Nodo::getSig()
{
	return this->Sig;
}