// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i = 0;
    string nombre;
    int cedula;
    double nht,vlrh,nhext,vlrhext,sbasico,tthextra,eps,fp,tded;
    int sn;

    while (i<10)
        {
            cout<<"Ingrese el nombre del empleado: ";
            cin >> nombre;
            cout<<"Ingrese el número de identificación: ";
            cin >> cedula;
            cout<<"Ingrese el numero de horas trabajadas: ";
            cin >> nht;
            cout<<"Ingrese el valor de la hora: ";
            cin >> vlrh;
            sbasico = nht*vlrh;
            cout<<"Ingresa la cantidad de horas extras: ";
            cin >> nhext;
            cout<<"Ingresa el valor de la horas extras: ";
            cin >> vlrhext;
            tthextra = nhext*vlrhext;
            eps = sbasico*0.04;
            fp = sbasico*0.04;
            tded = eps + fp;
            sn = (sbasico-tded)+tthextra;
            cout << "El empleado " << nombre << " se gana: " << sn << endl;
            i = i+1;
        }

    return 0;
}
