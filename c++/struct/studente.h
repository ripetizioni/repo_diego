#include <string>
#include <iostream>

using namespace std;

struct Studente {
    string nome;
    string cognome;
    int classe;
};

void stampaStudente(const Studente& s) {
    cout << "Nome: " << s.nome << ", Cognome: " << s.cognome << ", Classe: " << s.classe << endl;
}

void stampaTuttiStudenti(const Studente studenti[], int dimensione) {
    for (int i = 0; i < dimensione; ++i) {
        stampaStudente(studenti[i]);
    }
}