#include <iostream>

using namespace std;

int main() {

    int files = 5;
    int columnes = 7;

    for (int i = 0; i < files; i++) {
        for (int j = 0; j < columnes; j++) {
            if (i == 0 || i == files - 1 || j == 0 || j == columnes - 1) {
                cout << "#";
            }
            else if (i == files / 2 && j == columnes / 2) {
                cout << "!";
            }
            else {
                cout << ".";
            }
        }

        cout << endl;
    }

/*
    cout << #######;
    cout << #.....#;
    cout << #..!..#;
    cout << #.....#;
    cout << #######;
*/

    return 0;
}