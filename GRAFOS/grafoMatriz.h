#include <iostream>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <unordered_set>
#include "vertice.h"
#include "arista.h"

using namespace std;

typedef int* pint; // para el dimensionamiento de la matriz de adyacensia

class GrafoMatriz
{
protected:
	int maxvertices;// máximo numero de vértices
	int numvertices; // número de vértices actual
	Vertice* vertice; // array de vértices
	int** matAd; // matriz de adyacencia
public:
	// métodos públicos de la clase GrafoMatriz
	/*----------------- CONSTRUCTORES ---------------*/
	
	GrafoMatriz();


	/*------------------ METODOS ---------------------*/
	bool grafoVacio(); // Retorna true si el grafo esta vacio
	int getNumeroDeVertices(); // Retorna numero de vertices del grafo
	Vertice* getVertice(string nombre); // Retorna el vertice de acuerdo al nombre enviado
	void InsertaVertice(string nombre); // Inserta un vertice al grafo
	void InsertaArista(string vi, string vj); // Inserta arista entre los dos vertices especificados 
	void InsertaArista(string vi, string vj , int ady);
	void RecorridoAnchura(string origen); // Recorre el grafo con el algoritmo de anchura ( arbol -> recorrido por niveles)
	void RecorridoProfundidad(string origen); // Recorre el grafo con el algoritmo de profundidad (arbol -> recorrido en pre-orden )
	void MostrarLista(); // Mostrar todos los vertices con sus aristas 

	
						 
						 
						 
						 
						 
						 
						 
						 
						 
	/*void setNumeroDeVertices(int n) {
		numvertices = n; 
	}

	int numvertices(string v)
	{
		int i;
		bool encontrado = false;
		for (i = 0; (i < numvertices) && !encontrado;)
		{
			encontrado = vertice[i].igual(v);
			if (!encontrado) i++;
		}
		return (i < numvertices) ? i : -1;
	}

	void nuevoVertice(string nom)
	{
		bool esta = numvertices(nom) >= 0;
		if (!esta)
		{
			Vertice v = Vertice(nom, numvertices);
			vertice[numvertices++] = v; // se asigna a la lista.
			// No se comprueba que sobrepase el máximo
		}
	}

	void nuevoArco(string a, string b)
	{
		int va, vb;
		va = numvertices(a);
		vb = numvertices(b);
		if (va < 0 || vb < 0) throw "Vértice no existe";
		matAd[va][vb] = 1;
	}


	bool adyacente(string a, string b)
	{
		int va, vb;
		va = numvertices(a);
		vb = numvertices(b);
		if (va < 0 || vb < 0) throw "Vértice no existe";
		return matAd[va][vb] == 1;

	}bool adyacente(int va, int vb)
	{
		if (va < 0 || vb < 0 || va >= numvertices || vb >= numvertices)
			throw "Vértice no existe";
		return matAd[va][vb] == 1;
	}

	int getValor(string a, string b)
	{
		int va, vb;
		va = numvertices(a);
		vb = numvertices(b);
		if (va < 0 || vb < 0) throw "Vértice no existe";
			return matAd[va][vb];
	}
	int getValor(int va, int vb)
	{
		if (va < 0 || vb < 0 || va >= numvertices || vb >= numvertices)
			throw "Vértice no existe";
		return matAd[va][vb];
	}

	void setValor(int va, int vb, int v)
	{
		if (va < 0 || vb < 0 || va >= numvertices || vb >= numvertices)
			throw "Vértice no existe";
		matAd[va][vb] = v;
	}
	void setValor(char* a, char* b, int v)
	{  
		int va, vb;
		va = numvertices(a);
		vb = numvertices(b);
		if (va < 0 || vb < 0) throw "Vértice no existe";
		matAd[va][vb] = v;
	}*/


};
 
