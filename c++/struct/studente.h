#include <string>
#include <iostream>

using namespace std;

struct Studente
/**
 * @brief Struct representing a student.
 * 
 * This struct contains information about a student, including their name, surname,
 * class, grades, and the logical size of the grades array.
 * 
 * @var nome The first name of the student.
 * @var cognome The last name of the student.
 * @var classe The class or grade level of the student.
 * @var voti An array of grades for the student, with a maximum size of 50.
 * @var dimensioneLogica The logical size of the grades array, indicating the number of grades actually stored.
 */
{
    string nome;
    string cognome;
    int classe;
    float voti[50];
    int dimensioneLogica=0;

};

void stampaStudente(struct Studente A)
{
    cout<<"\nNome: "<<A.nome<<" Cognome: "<<A.cognome<<" Classe: "<<A.classe;
    return;
}

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
 * @brief Calcola la media dei voti di uno studente.
 * 
 * Questa funzione prende in input una struttura Studente e calcola la media
 * dei voti contenuti nell'array voti della struttura.
 * 
 * @param A La struttura Studente contenente i voti e la dimensione logica.
 * @return La media dei voti come valore float.
 */
float calcolaMedia(struct Studente A)
{
    float somma = 0;
    for (int i = 0; i < A.dimensioneLogica; i++)
    {
        somma=somma+A.voti[i];
    }
    somma=somma/A.dimensioneLogica;
    return somma;
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


