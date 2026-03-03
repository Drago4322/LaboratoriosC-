// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float nota;
    cout << "Ingrese una nota de 0 a 5.0: ";
    cin >> nota;

    if (nota > 5.0 || nota < 0) {
        cout << "Nota invalida";
    }
    else {
        if (nota > 0 && nota < 3.0) {
            cout << "Reprobó";
        }
        else if (nota > 2.9 && nota < 4.6) {
            cout << "Aprueba";
        }
        else {
            cout << "Excelente";
        }
    }

    return 0;
}
