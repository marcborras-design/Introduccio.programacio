#include <iostream>
#include <string>

using namespace std;

int main() {
    string clave;
    cin >> clave;

    bool te_mayuscula = false;
    bool te_minuscula = false;
    bool te_digito = false;

    // 1. Recórrer la cadena caràcter a caràcter
    for (int i = 0; i < clave.size(); i++) {
        char c = clave[i];

        if (c >= 'A' && c <= 'Z') {
            te_mayuscula = true;
        } else if (c >= 'a' && c <= 'z') {
            te_minuscula = true;
        } else if (c >= '0' && c <= '9') {
            te_digito = true;
        }
    }

    // 2. Comprovar la mida
    bool mida_valida = (clave.size() >= 8 && clave.size() <= 16);

    // 3. Avaluar resultats
    if (mida_valida && te_mayuscula && te_minuscula && te_digito) {
        cout << "Clave valida" << endl;
    } else {
        cout << "Clave no valida" << endl;
        
        if (!mida_valida) {
            cout << "Falta complir la mida (entre 8 i 16 caràcters)." << endl;
        }
        if (!te_mayuscula) {
            cout << "Falta una mayuscula." << endl;
        }
        if (!te_minuscula) {
            cout << "Falta una minuscula." << endl;
        }
        if (!te_digito) {
            cout << "Falta un digito." << endl;
        }
    }

    return 0;
}