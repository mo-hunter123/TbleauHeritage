#pragma once

#include <iostream>
#include <assert.h>

using namespace std; 

namespace Intervalle {
	class Tableau
	{
	public:
		static int NmbrIntervalle; 
	protected:
		int size; 
		float* tab;
	public:
		Tableau(int size); // constructeur 
		Tableau(const Tableau& T); // constructeur de recopie
		~Tableau(); // Distructeur 
		Tableau& operator=(const Tableau* T);
		void PrintTableau() const; 
		float& operator[](const int i); 
	};
}; 

