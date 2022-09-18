#include <iostream>

using namespace std;

class Arista;


class Vertice
{
protected:
	string nombre;
	int numvertice;
	Vertice* pVertice;
	Arista* arista;

	friend class GrafoMatriz;


public:

	/*-------------------- CONSTRUCTORES ---------------------*/

	//CONSTRUCTOR VACIO
	Vertice();

	//CONSTRUCTOR QUE INICIALIZA EL NOMBRE Y EL NUM EN -1 POR DEFECTO
	Vertice(string x)
	{
		nombre = x;
		numvertice = -1;
	}

	//CONSTRUCTOR QUE INICIALIZA TANTO EL NOMBRE COMO EL NUMERO DE VERTICE
	Vertice(string x, int n)
	{ 
		nombre = x;
		numvertice = n;
	}



	/* ------------------- METODOS ------------------------------

	string getNomVertice()
	{ // retorna el nombre del vértice
		return nombre;
	}
	void setNomVertice(string nom)
	{ // cambia el nombre del vértice
		nombre = nom;
	}
	bool igual(Vertice n)
	{ // decide entre la igualdad de nombres
		return nombre == n.nombre;
	}
	void setnumvertice(int n)
	{ // cambia el número del vértice
		numvertice = n;
	}
	int getnumvertice()
	{ // retorna el número del vértice
		return numvertice;
	}*/



};

