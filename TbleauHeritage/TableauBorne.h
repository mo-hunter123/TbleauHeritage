#pragma once
#include "Tableau.h"
namespace Intervalle {
	class TableauBorne : public Tableau
	{
	private:
		float bSup; 
		float bInf; 

	public: 
		TableauBorne(int size, float bInf, float bSup);
		float& operator[](int index) = delete;
		void operator()(int index, float newValue);
		void PrintTableau() const;
	};
}

