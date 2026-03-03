#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {

    string nombre;
    cout << "Ingrese su nombre completo: ";
    getline(cin, nombre);

    //contar caracteres
    int contador = 0;
    for (int i = 0; i < nombre.size(); i++){
        if (nombre[i] != ' '){
            contador++;
        }
    }
    cout << "cantidad de caracteres: " << contador << endl;


    //convertir a mayusculas manual
    string mayus = nombre;
    for(int i = 0; i < mayus.size(); i++) {
        if(mayus[i] >= 'a' && mayus[i] <= 'z') {
            mayus[i] = mayus[i] - 32;
        }
    }

    cout << "Nombre en mayusculas: " << mayus << endl;

    //fecha actual
    time_t ahora = time(NULL);
    tm * fecha = localtime(&ahora);
    int año = fecha->tm_year + 1900;
    int mes = fecha->tm_mon + 1;
    int dia = fecha->tm_mday;

    cout << "Fecha actual: " << dia << "/" << mes << "/" << año << endl;

    //usuario automatico
    string usuario = "";

    for(int i = 0; i < 3 && i < nombre.size(); i++) {
        usuario += nombre[i];
    }

    cout << "Usuario generado: " << usuario << año << endl;

    return 0;
}
