#include <iostream>

class Vertice;

class Arista
{
	int ady; //este atributo si se quiere un grafo valorado
	Arista* sig;
	Vertice* destino;

	friend class GrafoMatriz;// puede acceder a los metodos public y private de la clase amiga
	
public:

	/*CONSTRUCTOR */
	
	Arista(Vertice* dest);
	Arista(Vertice* dest, int ady); //para grafo valorado se envia el parametro del peso=ady por consola 
};

