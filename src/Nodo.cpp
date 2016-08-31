/*Rodrigo Mayett Guzman 
define los metodos de la lista */
#include "Nodo.h"
//crea un nodo con un dato
//y se le asigna un antecesor y un sucesor
Nodo::Nodo(int Dato , Nodo* Ant , Nodo* Sig)
{
	this->Dato = Dato;
	this->Ant = Ant;
	this->Sig = Sig;	
}
//crea un nodo unico
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Ant = NULL;
	this->Sig = NULL;
}
//establece un nuevo dato en el nodo
void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}
//indica cual es nuevo nodo antecesor
void Nodo::setAnt(Nodo* Ant)
{
	this->Ant = Ant;
}
//indica cual es el nuevo nodo sucesor
void Nodo::setSig(Nodo* Sig)
{
	this->Sig = Sig;
}
//obtiene el dato del nodo
int Nodo::getDato()
{
	return this->Dato;
}
//obtiene el antecesor del nodo
Nodo* Nodo::getAnt()
{
	return this->Ant;
}
//obtiene el sucesor del nodo
Nodo* Nodo::getSig()
{
	return this->Sig;
}