#include <string>
#include <iostream>
#include "studente.h"

using namespace std;

struct Classe
{
    string nome_classe;
    int n_studenti;
    Studente studenti[50];
};

/**
 * @brief Stampa le informazioni di una classe di studenti.
 * 
 * Questa funzione itera attraverso un array di strutture Studente e stampa le informazioni
 * di ciascuno studente utilizzando la funzione stampaStudente.
 * 
 * @param classe Array di strutture Studente che rappresenta la classe.
 * @param dimensione Numero di studenti nella classe.
 */
void stampaClasse(struct Studente classe[], int dimensione)
{
    for (int i = 0; i < dimensione; i++)
    {
        cout<<"\n Studente numero: "<<i;
        stampaStudente(classe[i]);
    }
    return;
}


/**
 * @brief Trova lo studente con la media più alta in un array di studenti.
 *
 * Questa funzione itera attraverso un array di strutture Studente e
 * determina quale studente ha la media più alta. Restituisce una copia
 * della struttura Studente con la media più alta.
 *
 * @param A Array di strutture Studente.
 * @param dimensione Numero di elementi nell'array A.
 * @return La struttura Studente con la media più alta.
 */
struct Studente miglioreStudente(struct Studente A[], int dimensione)
{
    // Inizializza il miglior studente come il primo della lista
    struct Studente migliore=A[0];
    
    // Itera attraverso tutti gli studenti
    for(int i=1; i<dimensione;i++)
    {
        // Se la media del miglior studente è inferiore alla media dello studente corrente
        if(calcolaMedia(migliore)<calcolaMedia(A[i]))
        {
            // Aggiorna il miglior studente con lo studente corrente
            migliore=A[i];
        }
    }
    
    // Ritorna il miglior studente
    return migliore;
}