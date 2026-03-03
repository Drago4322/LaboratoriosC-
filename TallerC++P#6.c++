#include <iostream>
#include <string>
using namespace std;

int main() {
    int cantidad;

    cout << "Cantidad de estudiantes: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Cantidad invalida." << endl;
        return 1;
    }

    string* nombres = new string[cantidad];
    float* notas = new float[cantidad];

    cin.ignore();

    for (int i = 0; i < cantidad; i++) {
        cout << "\nEstudiante " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, nombres[i]);

        cout << "Nota: ";
        cin >> notas[i];

        cin.ignore();
    }

    float suma = 0;
    float mayor = notas[0];
    float menor = notas[0];
    int posMayor = 0;
    int posMenor = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];

        if (notas[i] > mayor) {
            mayor = notas[i];
            posMayor = i;
        }

        if (notas[i] < menor) {
            menor = notas[i];
            posMenor = i;
        }
    }

    float promedio = suma / cantidad;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Nota mayor: " << mayor << " - " << nombres[posMayor] << endl;
    cout << "Nota menor: " << menor << " - " << nombres[posMenor] << endl;

    delete[] nombres;
    delete[] notas;

    return 0;
}
