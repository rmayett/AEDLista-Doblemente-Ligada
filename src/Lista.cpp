/*Rodrigo Mayett Guzman 
define los metodos de la lista*/
#include "Lista.h"
//el metodo crea una lista vacia
Lista::Lista() 
{
	this->H=NULL;
	this->T=NULL;
}
//el metodo crea una lista con un dato
Lista::Lista(int Dato)
{
	Nodo * aux= new Nodo(Dato);
	this->H=aux;
	this->T=aux;
}
//el metodo revisa si la lista esta vacia
bool Lista::ListaVacia()
{
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}
//el metodo agrega un nodo al inicio 
//y cambia la referencia de H
void Lista::AddInicio(int Dato)
{
	Nodo* aux = new Nodo(Dato,this->T,this->H);
	if (ListaVacia())
	{
		this->T= aux;
	}
	this->H= aux;
}
//el metodo agrega un nodo al final
//y cambia la referencia de T
void Lista::AddFinal(int Dato){
	Nodo * aux = new Nodo(Dato);	
	if (!ListaVacia())
	{
		aux->setAnt(T);
		T->setSig(aux);
		T=aux;		
	}
	else{
		this->H=aux;
		this->T=aux;
	}		
}
//el metodo agrega un nodo despues 
//del valor dado como referencia 
void Lista::AddRef(int Dato, int Ref){
	if (ListaVacia())
	{
		Nodo * aux = new Nodo(Dato);
		this->H =aux;
		this->T =this->H;
		std::cout<<"No se encontro la referencia porque la lista esta vacia"<<std::endl;
		return ;		
	}
	Nodo * aux = this->H;
	while(aux->getDato()!=Ref&&aux!=this->T){
		aux = aux->getSig();
	}
	if (aux!=NULL)
	{
		Nodo * aux2 = new Nodo(Dato,aux,aux->getSig());
		Nodo * aux3 = aux->getSig();
		aux->setSig(aux2);
		aux3->setAnt(aux2);
	}
	else{
		std::cout<<"No existe la referenci aen la lista"<<std::endl;
	}
}
//remmueve el nodo que se encuentra al inicio
// y pasa la referencia de H al siguiente
int Lista::RemoveInicio(){
	if (!ListaVacia())
	{
		int Dato =this->H->getDato();	
	if (this->H==NULL)
	{
		this->T=NULL;
	}
	this->H=this->H->getSig();
	this->H->setAnt(NULL);
	return Dato;
	}
	else{
		std::cout<<"La lista esta vacia"<<std::endl;		
	}	
}
//remueve el nodo al final de la lista
// y pasa la referencia de T al anterior
int Lista::RemoveFinal(){
	if (ListaVacia())
	{
		std::cout<<"La lista esta vacia"<<std::endl;
	}
	int Dato =T->getDato();
	if (this->H!=this->T)
	{
		Nodo * aux = this->H;		
		while(aux->getSig()!=this->T){
			aux = aux->getSig();
		}
		this->T=aux;
		this->T->setSig(NULL);
	}
	else{
		this->H=NULL;
		this->T=NULL;
	}
	return Dato;
}
//busca un elemento de la lista y imprime el dato encontrado
Nodo * Lista::BuscarElemento(int Dato){ 
	if (ListaVacia())
	{
		std::cout<<"No se encuentra el elemento"<<std::endl;
		return NULL;		
	}
	Nodo * aux = this->H;
	while(aux->getDato()!=Dato&&aux!=NULL){
		aux=aux->getSig();
		if (aux==NULL)
		{//termina el ciclo en caso de no encontrar el elemento buscado
			std::cout<<"No se encuentra el elemento"<<std::endl;
			return NULL;
		}
	}
	if (aux->getDato()==Dato)
	{
		std::cout<<aux->getDato()<<" se encuentra en la lista"<<std::endl;	
	}
	return aux;
}
//remueve un nodo de la lista
// que tenga el dato usado como referencia
Nodo * Lista::RemoveRef(int Ref){
	if (ListaVacia())
	{
		std::cout<<"No se encontro la referencia porque la lista esta vacia"<<std::endl;
		return NULL;		
	}
	Nodo * aux = this->H;
	Nodo * aux2 = this->H;
	while(aux->getDato()!=Ref&&aux!=this->T){
		aux = aux->getSig();
	}
	while(aux2->getSig()!=aux){
		aux2 = aux2->getSig();
	}
	Nodo * aux3 = aux->getSig();
	if (aux!=NULL)
	{		
		aux2->setSig(aux->getSig());
		aux3->setAnt(aux2);
	}
	else{
		std::cout<<"No existe la referencia en la lista"<<std::endl;
	}
}
//vacia la lista borrando las referencias	
int Lista::VaciarLista(){
	this->H=NULL;
	this->T=NULL;
	std::cout<<"Lista Vaciada"<<std::endl;	
}
//muestra los nodos
void Lista::Show()
{
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}