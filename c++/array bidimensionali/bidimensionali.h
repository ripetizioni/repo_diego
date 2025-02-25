#include <iostream>
using namespace std;
const int  num_colonne=5;//colonne
const int  num_righe=6; //righe
void inizializzaLibreria(string libreria[num_righe][num_colonne])
{
    for (int i = 0; i < num_righe; i++)
    {
        for (int j = 0 ; j < num_colonne; j++)
        {
            libreria[i][j]="";
        }
    }
}

/**
 * @brief Aggiunge un libro alla libreria nella posizione specificata.
 * 
 * Questa funzione aggiunge un libro alla libreria in una posizione specificata
 * da numScaffale e numPosizione. Se i valori di numScaffale o numPosizione sono
 * fuori dai limiti, viene richiesto all'utente di inserirli nuovamente. Se la 
 * posizione specificata è già occupata da un altro libro, viene visualizzato un 
 * messaggio di avviso. Altrimenti, il libro viene aggiunto alla libreria.
 * 
 * @param libreria La matrice che rappresenta la libreria.
 * @param numScaffale Il numero dello scaffale in cui aggiungere il libro.
 * @param numPosizione La posizione nello scaffale in cui aggiungere il libro.
 * @param libro Il titolo del libro da aggiungere.
 */

void aggiungiLibro(string libreria[num_righe][num_colonne], int numScaffale,int numPosizione, string libro)
{
    while ((numScaffale<0||numScaffale>=num_righe) || (numPosizione<0||numPosizione>=num_colonne))
    {
        cout<<"\n Valori sbagliati, inserisci num scaffale: ";
        cin>>numScaffale;
        cout<<"\n Valori sbagliati, inserisci numPosizione: ";
        cin>>numPosizione;
    }
    if (libreria[numScaffale][numPosizione]!= "")
    {
        cout<<"\n In questa posizione c'e' gia' un libro: "<<libreria[numScaffale][numPosizione];
    }
    else
    {
        libreria[numScaffale][numPosizione]=libro;
        cout<<"\n Libro aggiunto "<<libreria[numScaffale][numPosizione];      
    }
    return;
}

void rimuoviLibro(string libreria[num_righe][num_colonne], int numScaffale,int numPosizione)
{
    while ((numScaffale < 0 || numScaffale >= num_righe) || (numPosizione < 0 || numPosizione >= num_colonne))
    {
        cout << "\n Valori sbagliati, inserisci num scaffale: ";
        cin >> numScaffale;
        cout << "\n Valori sbagliati, inserisci numPosizione: ";
        cin >> numPosizione;
    }
    if (libreria[numScaffale][numPosizione] == "")
    {
        cout << "\n In questa posizione non c'e' nessun libro.";
    }
    else
    {
        libreria[numScaffale][numPosizione] = "";
        cout << "\n Libro rimosso.";
    }
    return;
}