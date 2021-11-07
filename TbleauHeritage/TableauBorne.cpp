#include "TableauBorne.h"
#include <stdio.h>
#include <stdlib.h>
using namespace Intervalle; 

// on va remplir les valeurs de tab par des numeros random entre bInf et bSup 

float RandomFloat(float min, float max) {
	return  (max - min) * ((((float)rand()) / (float)RAND_MAX)) + min;
}

Intervalle::TableauBorne::TableauBorne(int size, float bInf, float bSup):Tableau(size)
{
	if(bInf < bSup){
		this->bInf = bInf; 
		this->bSup = bSup; 
	}
	else {
		this->bInf = bSup;
		this->bSup = bInf;
	}

	for (int i = 0; i < size; i++)
	{
		this->tab[i] = RandomFloat(this->bInf, this->bSup);
	}
}

void Intervalle::TableauBorne::operator()(int index, float newValue)
{
	if (0 <= index && index < this->size) {
		this->tab[index] = newValue; 
	}
}

void Intervalle::TableauBorne::PrintTableau() const
{
	Tableau::PrintTableau(); 
}


