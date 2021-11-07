
#include <iostream>
//#include "Sengleton.h"
#include "Tableau.h"
#include "TableauBorne.h"

using namespace std; 
using namespace Intervalle; 


int main()
{
    // creating a session 


    // creating the table 
    Tableau I1(5); 
    for (int i = 0; i < 5; i++)
    {
        I1[i] = (2.0 * i + 1.0); 
    }
    Tableau I2(I1);
    I2[4] = 100; 
    I2.PrintTableau(); 
    
    cout << endl; 
    I1.PrintTableau(); 

    cout << endl;
    TableauBorne T1(6, 2.3, 5); 
    T1.PrintTableau();

    T1(0, 32.3); 

    T1.PrintTableau();
    cout << endl;
}
