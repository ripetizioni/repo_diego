#include <iostream>
#include "libreria.h"
using namespace std;

int main() 
{
    // Dichiarazione di un array bidimensionale 3x3
    int riga=3;
    int colonna=3;
    int matrice[riga][colonna];

    // Stampa degli elementi della matrice
    cout << "Elementi della matrice:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    // Modifica di un elemento della matrice
    matrice[1][1] = 10;
    cout << "Matrice dopo la modifica:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

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