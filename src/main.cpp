/*Rodrigo Mayett Guzman
Es el programa principal de la lista*/
#include "Lista.h"

int main()
{
	Lista l = Lista();//crea una lista vacia
	l.AddInicio(4);
	l.AddInicio(5);
	l.AddFinal(10);
	l.AddRef(15,5);
	l.AddInicio(6);
	l.AddInicio(7);
	l.RemoveInicio();
	l.RemoveFinal();
	l.BuscarElemento(15);
	l.RemoveRef(5);
	l.VaciarLista();
	l.Show();	
	return 0;
}