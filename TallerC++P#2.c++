//operaciones matematicas
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "digite el primer numero: ";
    cin >> num1;
    cout << "digite el segundo numero: ";
    cin >> num2;

    //operaciones
    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;

    cout << "\nResultados:" << endl;
    cout << "suma:" << suma << endl;
    cout << "resta:" << resta << endl;
    cout << "multiplicacion:" << multiplicacion << endl;

    //division por cero
    if (num2 != 0) {
        double division = num1 / num2;
        cout << "division:" << division << endl;
    } else {
        cout << "no es posible dividir entre cero" << endl;
    }

    //comparacion
    if (num1 > num2) {
        cout << num1 << " es mayor que " << num2 << endl;
    }
    else if (num1 < num2) {
        cout << num2 << " es mayor que " << num1 << endl;
    }
    else {
        cout << "los dos numeros son iguales" << endl;
    }

    return 0;
}
