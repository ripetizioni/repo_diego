#include <iostream>
#include <string>

using namespace std;

const int NUM_COLONNE = 10; // Definisci il numero massimo di colonne

void inizializzaLibreria(string libreria[][NUM_COLONNE], int numScaffali, int numPosizioni) {
    for (int i = 0; i < numScaffali; ++i) {
        for (int j = 0; j < numPosizioni; ++j) {
            libreria[i][j] = ""; // Inizializza ogni posizione come vuota
        }
    }
}

void aggiungiLibro(string libreria[][NUM_COLONNE], int scaffale, int posizione, string libro) {
    if (scaffale >= 0 && scaffale < NUM_COLONNE && posizione >= 0 && posizione < NUM_COLONNE) {
        if (libreria[scaffale][posizione] == "") {
            libreria[scaffale][posizione] = libro;
        } else {
            cout << "La posizione non è vuota." << endl;
        }
    } else {
        cout << "Posizione non valida." << endl;
    }
}

void rimuoviLibro(string libreria[][NUM_COLONNE], int scaffale, int posizione) {
    if (scaffale >= 0 && scaffale < NUM_COLONNE && posizione >= 0 && posizione < NUM_COLONNE) {
        if (libreria[scaffale][posizione] != "") {
            libreria[scaffale][posizione] = "";
        } else {
            cout << "Non c'è nessun libro in questa posizione." << endl;
        }
    } else {
        cout << "Posizione non valida." << endl;
    }
}

void visualizzaLibreria(string libreria[][NUM_COLONNE], int numScaffali, int numPosizioni) {
    for (int i = 0; i < numScaffali; ++i) {
        for (int j = 0; j < numPosizioni; ++j) {
            if (libreria[i][j] == "") {
                cout << "[Vuoto] ";
            } else {
                cout << "[" << libreria[i][j] << "] ";
            }
        }
        cout << endl;
    }
}

int main() {
    const int numScaffali = 5;
    const int numPosizioni = 10;
    string libreria[numScaffali][NUM_COLONNE];

    inizializzaLibreria(libreria, numScaffali, numPosizioni);
    aggiungiLibro(libreria, 2, 3, "Il Signore degli Anelli");
    aggiungiLibro(libreria, 1, 5, "Harry Potter");
    rimuoviLibro(libreria, 2, 3);
    visualizzaLibreria(libreria, numScaffali, numPosizioni);

    return 0;
}