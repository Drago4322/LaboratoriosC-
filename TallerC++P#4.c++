
Bruno Angel Inciarte Diaz <bruno.inciartedi@amigo.edu.co>
mar, 24 feb, 11:32 (hace 6 días)
para Julian

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int N,i,multiplicacion;
    int suma = 0;
    bool esPrimo = true;
    cout<<"Bienvenido a la calculadora"<<endl;
    cout<<"Ingresa un numero para mostrar r,hacer una suma acumulativa y saber si es un numero primo"<<endl;
    cin>>N;
    for (i=1;i<=10;i++){
        multiplicacion = i*N;
        cout<<N<<"x"<<i<<"="<<multiplicacion<<endl;
        suma = suma+multiplicacion;
    }
    cout<<"La suma de todas las multiplicaciones es: "<<suma<<endl;
    if (N <= 1) {
        esPrimo = false;
    } else {
        for (i = 2; i*i <= N; i++) {
            if (N % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo)
        cout<<"El numero "<<N<<" es primo"<<endl;
    else
        cout<<"El numero "<<N<<" no es primo"<<endl;
    return 0;
}
