#ifndef BIDIMENSIONALI_H
#define BIDIMENSIONALI_H
#include <iostream>
#include <string>

using namespace std;

const int num_colonne = 5; // colonne
const int num_righe = 6;   // righe

void inizializzaLibreria(string libreria[num_righe][num_colonne]);
void aggiungiLibro(string libreria[num_righe][num_colonne], int numScaffale, int numPosizione, string libro);
void rimuoviLibro(string libreria[num_righe][num_colonne], int numScaffale, int numPosizione);
void stampaLibreria(string libreria[num_righe][num_colonne]);

#endif // BIDIMENSIONALI_H

void inizializzaLibreria(string libreria[num_righe][num_colonne])
{
    for (int i = 0; i < num_righe; i++)
    {
        for (int j = 0; j < num_colonne; j++)
        {
            libreria[i][j] = " ";
        }
    }
}

void aggiungiLibro(string libreria[num_righe][num_colonne], int numScaffale, int numPosizione, string libro)
{
    while ((numScaffale < 0 || numScaffale >= num_righe) || (numPosizione < 0 || numPosizione >= num_colonne))
    {
        cout << "\n Valori sbagliati, inserisci numScaffale: ";
        cin >> numScaffale;
        cout << "\n Valori sbagliati, inserisci numPosizione: ";
        cin >> numPosizione;
    }
    if (libreria[numScaffale][numPosizione] != " ")
    {
        cout << "\n In questa posizione c'e' gia' un libro: " << libreria[numScaffale][numPosizione];
    }
    else
    {
        libreria[numScaffale][numPosizione] = libro;
        cout << "\n Libro aggiunto " << libreria[numScaffale][numPosizione];
    }
}

void rimuoviLibro(string libreria[num_righe][num_colonne], int numScaffale, int numPosizione)
{
    while ((numScaffale < 0 || numScaffale >= num_righe) || (numPosizione < 0 || numPosizione >= num_colonne))
    {
        cout << "\n Valori sbagliati, inserisci numScaffale: ";
        cin >> numScaffale;
        cout << "\n Valori sbagliati, inserisci numPosizione: ";
        cin >> numPosizione;
    }
    if (libreria[numScaffale][numPosizione] == " ")
    {
        cout << "\n In questa posizione non c'è nessun libro ";
    }
    else
    {
        libreria[numScaffale][numPosizione] = " ";
        cout << "\n Libro rimosso ";
    }
}

void stampaLibreria(string libreria[num_righe][num_colonne])
{
    cout <<"\n";
    for (int i = 0; i < num_righe; i++)
    {
        for (int j = 0; j < num_colonne; j++)
        {
            if (libreria[i][j] == " ")
            {
                cout << " - ";
            }
            else
            {
                cout << libreria[i][j] << " ";
            }
        }
        cout << endl; // Aggiungi un newline alla fine di ogni riga
    }
}