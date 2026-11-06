#include <iostream>
#include <cmath>

using namespace std;

// Funció que calcula l'equació de segon grau
// Utilitzem '&' en x1 i x2 per poder modificar el seu valor directament
bool calcular_equacio(double a, double b, double c, double &x1, double &x2) {
    double discriminant = (b * b) - (4 * a * c);

    // Si el discriminant és negatiu, retornera 'false' (no s'ha pogut calcular en R)
    if (discriminant < 0) {
        return false;
    }

    // Si no és negatiu, fem el càlcul i retornem 'true'
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    return true;
}
        
int main() {
    double a, b, c;
    double x1, x2;

    cout << "Introdueixi el nombre a: ";
    cin >> a;
    cout << "Introdueixi el nombre b: ";
    cin >> b;
    cout << "Introdueixi el nombre c: ";
    cin >> c;

    // Validem primer que 'a' no sigui 0
    if (a == 0) {
        cout << "[ERROR] El valor de 'a' no pot ser 0." << endl;
        return 0;
    }

    // Cridem a la funció i comprovem si ha tingut èxit
    bool te_solucio = calcular_equacio(a, b, c, x1, x2);

    if (te_solucio) {
        cout << "Les solucions son:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        cout << "[INFO] L'equacio no te solucions reals." << endl;
    }

    return 0;
}