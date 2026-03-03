// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    const int MAX=15;
    string nombres[MAX];
    int edades[MAX];
    char triajes[MAX];
    int total=0;
    char opcion;
    do{
        cout<<"\n==============\n";
        cout<<" CLINICA RURAL SAN JOSÉ DEL GUAVIARE\n";
        cout<<"===============\n";
        cout<<"1.Registrar nuevo paciente\n";
        cout<<"2.Ver reporte de jornada\n";
        cout<<"3.Reiniciar jornada\n";
        cout<<"4.Salir del sistema\n";
        cout<<"------------------n\";
        cout<<"Opcion: ";
        cin>>opcion;
        switch(opcion){
            case'1':{
                string nombre;
                int edad;
                char triaje;
                if (capturarPaciente(nombre,edad,triaje)){
                    if(total<MAX){
                        nombres[total]=nombre;
                        edades[total]=edad;
                        triajes[total]=triaje;
                        total++;
                        cout<<"\n Paciente#"<<total<<"registrado exitosamente.\n";
                    }
                }
            }
        }
    }

    return 0;
}
