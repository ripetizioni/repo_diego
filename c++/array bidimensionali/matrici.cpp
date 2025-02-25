#include <iostream>
#include "libreria.h"
using namespace std;

int main() 
{
    int numScaffali;
    int numPosizioni;
    string libreria[numScaffali][numPosizioni];
    
    
    // Dichiarazione di un array bidimensionale 3x3
    /*int riga=3;
    int colonna=7;
    int matrice[riga][colonna]= {
        {1,  2,  3,  4,  5,  6,  7},
        {8,  9,  10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21}};

    // Stampa degli elementi della matrice
    cout << "Elementi della matrice:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < j; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    for(int i =0; i<3;i++){
        for(int j = 0; j<7;j++){
            if(matrice [i][j]==12){
                cout<<"\nil numero e' presente";
            }
        }
    }*/

    // Somma degli elementi della matrice
    int somma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            somma += matrice[i][j];
        }
    }
    cout << "Somma degli elementi della matrice: " << somma << endl;

    return 0;
}