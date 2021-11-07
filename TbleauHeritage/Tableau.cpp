#include <iostream>
#include "Tableau.h"

using namespace std;
using namespace Intervalle; 

int Tableau::NmbrIntervalle = 0; 

Intervalle::Tableau::Tableau(int size)
{
	this->size = size; 
	this->tab = nullptr; 
	if (size > 0)
		this->tab = new float[size]; 
	
	NmbrIntervalle++; 
}
Tableau& Intervalle::Tableau::operator=(const Tableau* T)
{
	if (this != T) {
		this->tab = new float[T->size];
		this->size = T->size;
		for (int i = 0; i < this->size; i++)
		{
			this[i] = T[i];
		}
	}

	return *this; 
}

void Intervalle::Tableau::PrintTableau() const
{
	cout << this->size << endl;
	for (int i = 0; i < this->size; i++)
	{
		cout << this->tab[i] << " ";
	}
}

Intervalle::Tableau::Tableau(const Tableau& T)
{
	
	if (this != &T) {
		this->size = T.size;
		this->tab = new float[T.size]; 
		
		for (int i = 0; i < this->size; i++)
		{
			this->tab[i] = T.tab[i]; 
		}
	}
}

Intervalle::Tableau::~Tableau()
{
	if (this->tab != nullptr) {
		delete[] this->tab;
		this->tab = nullptr;
	}
}


float& Intervalle::Tableau::operator[](const int i)
{
	if (0 <= i && i < this->size) {
		return this->tab[i]; 
	}
}
