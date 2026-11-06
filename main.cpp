#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    int tamany_paquet;
    int total_bytes = 0;              // Per sumar tots els bytes
    int valor_maxim = 0;              // Per guardar la mida mes gran
    int comptador_paquets_grans = 0;  // Per comptar els > 1000
    int mitjana = 0;

    // Pas 1: Validacio de N (entre 1 i 20)
    do {
        cout << "Numero de paquetes: ";
        cin >> N;
        if (N < 1 || N > 20) {
            cout << "[ERROR] El nombre de paquets ha de ser entre 1 i 20." << endl;
        }
    } while (N < 1 || N > 20);

    // Pas 2: Bucle per llegir els paquets
    for (int i = 1; i <= N; i++) {
        do { 
            cout << "Bytes del paquet " << i << ": ";
            cin >> tamany_paquet;
            if (tamany_paquet < 0) {
                cout << "[ERROR] El tamany del paquet no pot ser negatiu." << endl;
            }

        } while (tamany_paquet < 0);

    // Pas 3: Afegir tamany_paquet a total_bytes
    //total_bytes = total_bytes + tamany_paquet;
    total_bytes += tamany_paquet;      

    if (tamany_paquet > valor_maxim) {
        valor_maxim = tamany_paquet;
    }
    if (tamany_paquet > 1000) {
        comptador_paquets_grans ++;
    }
    }
    // Pas 3: Sortida
    cout << "Bytes totals: " << total_bytes << endl;
    cout << "Tamany màxim: " << valor_maxim << endl;
    mitjana = (total_bytes / N);
    cout << "Mitjana de bytes per paquet: " << mitjana << endl;
    cout << "Paquets > 1000 bytes: " << 2 << endl;


    return 0;
}