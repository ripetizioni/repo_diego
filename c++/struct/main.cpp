#include <iostream>
#include "studente.h"
using namespace std;

int main() {
    // Dichiarazione di un array di strutture Studente di dimensione 50
    struct Studente classe[50];
    // Variabile per tenere traccia della dimensione logica dell'array
    int dimensioneLogica=0;
    // Variabile per memorizzare la scelta dell'utente
    char scelta;
    do
    {
        // Menu di scelta per l'utente
        cout<< "\ninserisci 'a' per aggiungere uno studente, \n'v' per aggiungere un voto a uno studente, \n's' per stampare la classe,\n't' per sapere lo studente con la media migliore, \n'q' per uscire\n";
        cin>>scelta;
        switch (scelta)
        {
            case 'a':
            {
                // Aggiunta di un nuovo studente
                cout<<"\n Inserisci Nome: ";
                cin>>classe[dimensioneLogica].nome;
                cout<<"\n Inserisci Congnome: ";
                cin>>classe[dimensioneLogica].cognome;
                cout<<"\nInserisci classe: ";
                cin>>classe[dimensioneLogica].classe;
                cout<<"\nAggiunto studente ";
                // Stampa dei dettagli dello studente appena aggiunto
                stampaStudente(classe[dimensioneLogica]);
                // Incremento della dimensione logica
                dimensioneLogica++;
                break;
            }
            case 'v':
            {
                // Aggiunta di un voto a uno studente esistente
                int studente;
                float voto;
                // Stampa della lista degli studenti
                stampaClasse(classe,dimensioneLogica);
                cout<<"\n A quale studente vuoi aggiugnere il voto: ";
                cin>>studente;
                cout<<"\nInserisci voto: ";
                cin>>voto;
                // Aggiunta del voto allo studente selezionato
                classe[studente].voti[classe[studente].dimensioneLogica]=voto;
                classe[studente].dimensioneLogica++;
                cout<<"\nVoto aggiunto ";
                break;
            }
            case 's':
            {
                // Stampa della lista completa degli studenti
                stampaClasse(classe,dimensioneLogica);
                break;
            }
            case 't':
            {
                // Stampa dello studente con la media dei voti migliore
                cout<<"\nLo studente con la media migliore è: ";
                stampaStudente(miglioreStudente(classe,dimensioneLogica));
                break;
            }
            case 'q':
            {
                // Uscita dal programma
                cout<<"\n Uscita del programma";
                break;
            }
            default:
            {
                // Gestione della scelta non valida
                cout<<"\nScelta non valida";
                break;
            }
        }
    }while (scelta!='q'); // Ripeti il ciclo finché l'utente non sceglie di uscire ('q')
    
    return 0;
}
