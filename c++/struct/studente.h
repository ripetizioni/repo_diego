#include <string>
#include <iostream>

using namespace std;

struct Studente
{
    string nome;
    string cognome;
    int classe;
};

void stampaStudente(struct Studente A)
{
    cout<<"\n"<<A.nome<<"\n"<<A.cognome<<"\n"<<A.classe;
    return;
}

void stampaClasse(struct Studente classe[], int dimensione)
{
    for (int i = 0; i < dimensione; i++)
    {
        cout<<"\n";
        stampaStudente(classe[i]);
    }
    return;
}




