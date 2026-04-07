#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int opcion;
    string nombre, codigo, codigoBuscar;
    float nota, suma=0;
    int contador=0;

    cout<<"MENU"<<endl;
    cout<<"1. Registrar estudiante"<<endl;
    cout<<"2. Listar estudiantes"<<endl;
    cout<<"3. Buscar por codigo"<<endl;
    cout<<"4. Calcular promedio"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>opcion;

    if(opcion==1)
    {
        ofstream archivo("estudiantes.txt", ios::app);
        cout<<"Nombre: ";
        cin>>nombre;
        cout<<"Codigo: ";
        cin>>codigo;
        cout<<"Nota final: ";
        cin>>nota;

        archivo<<nombre<<" "<<codigo<<" "<<nota<<endl;
        archivo.close();
    }
    else if(opcion==2)
    {
        ifstream archivo("estudiantes.txt");
        while(archivo>>nombre>>codigo>>nota)
        {
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Codigo: "<<codigo<<endl;
            cout<<"Nota: "<<nota<<endl;
            cout<<"----------------"<<endl;
        }
        archivo.close();
    }
    else if(opcion==3)
    {
        ifstream archivo("estudiantes.txt");
        cout<<"Ingrese codigo a buscar: ";
        cin>>codigoBuscar;

        while(archivo>>nombre>>codigo>>nota)
        {
            if(codigo==codigoBuscar)
            {
                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Codigo: "<<codigo<<endl;
                cout<<"Nota: "<<nota<<endl;
            }
        }
        archivo.close();
    }
    else if(opcion==4)
    {
        ifstream archivo("estudiantes.txt");
        while(archivo>>nombre>>codigo>>nota)
        {
            suma+=nota;
            contador++;
        }
        if(contador>0)
        {
            cout<<"Promedio: "<<suma/contador<<endl;
        }
        else
        {
            cout<<"No hay datos"<<endl;
        }
        archivo.close();
    }

    return 0;
}
