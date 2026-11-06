#include <iostream>
#include <cmath>

using namespace std;

double a, b, c;
double x1, x2;

int main() {
    cout << "A continuacio es fara el calcul usant la formula general de les equacions de segon grau" << endl;
    cout << "[TEORIA]" << endl;
    cout << "if (discriminant > 0) hi haura 2 solucions reals" << endl;
    cout << "if (discriminant == 0) hi haura 1 solucio real" << endl;
    cout << "if (discriminant < 0) hi haura solucions complexes" << endl << endl;

    cout << "Introdueixi el nombre a: ";
    cin >> a;
    cout << "Introdueixi el nombre b: ";
    cin >> b;
    cout << "Introdueixi el nombre c: ";
    cin >> c;
    
    // Calculem el discriminant despres de llegir a, b i c
    double discriminant = (b * b) - (4 * a * c);
    
    if (discriminant < 0) {
        cout << "[ERROR] El discriminant es negatiu (" << discriminant << "). No hi ha solucions reals." << endl;
    } else {
        // Calculem les dues arrels
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        
        // Mostrem els resultats per pantalla
        if (discriminant == 0) {
            cout << "Hi ha 1 unica solucio real: x = " << x1 << endl;
        } else {
            cout << "Hi ha 2 solucions reals:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
    
    return 0;
}