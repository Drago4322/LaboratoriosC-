// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i = 0;
    int alumnos;
    string nombre;
    int cedula;
    double notaT1,notaEV1,notaT2,notaEV2,notaT3,notaEV3,notaPYT,definitiva;
    cout<<"Ingrese la cantidad de alumnos a los que se les calculará la nota definitiva: ";
    cin >>alumnos;
    while (i<alumnos)
        {  
            i = i+1;
            cout<<"Ingrese el nombre del alumno #"<< i <<":";
            cin >> nombre;
            cout<<"Ingrese el número de identificación: ";
            cin >> cedula;
            cout<<"Ingrese la nota obtenida en el Taller 1: ";
            cin >> notaT1;
            notaT1 = notaT1*0.10;
            cout<<"Ingrese la nota obtenida en el Parcial 1: ";
            cin >> notaEV1;
            notaEV1 = notaEV1*0.13;
            cout<<"Ingrese la nota obtenida en el Taller 2: ";
            cin >> notaT2;
            notaT2 = notaT2*0.10;
            cout<<"Ingresa la nota obtenida en el Parcial 2: ";
            cin >> notaEV2;
            notaEV2 = notaEV2*0.13;
            cout<<"Ingrese la nota obtenida en el Taller 3: ";
            cin >> notaT3;
            notaT3 = notaT3*0.10;
            cout<<"Ingresa la nota obtenida en el Parcial 3: ";
            cin >> notaEV3;
            notaEV3 = notaEV3*0.14;
            cout<<"Ingresa la nota obtenida en el Proyecto Final: ";
            cin >> notaPYT;
            notaPYT = notaPYT*0.30;
            definitiva = notaT1+notaT2+notaT3+notaEV1+notaEV2+notaEV3+notaPYT;
            cout << "El alumno " << nombre << " con cedula: " << cedula << " tiene la definitiva en: " << definitiva << endl;
           
        }

    return 0;
}
