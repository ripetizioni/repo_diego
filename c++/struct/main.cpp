#include <iostream>
#include "studente.h"
using namespace std;

int main() {
    Studente studenti[2] = {{"Mario", "Rossi", 3}, {"Luigi", "Verdi", 4}};
    stampaTuttiStudenti(studenti, 2);
    return 0;
}
