#include <iostream>
#include <fstream>
using namespace std;

class Tarea
{
public:
    string nombre;
    int prioridad;
    string fecha;
    string estado;

    void marcarCompletada()
    {
        estado="completada";
    }

    void mostrar()
    {
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Prioridad: "<<prioridad<<endl;
        cout<<"Fecha: "<<fecha<<endl;
        cout<<"Estado: "<<estado<<endl;
        cout<<"----------------"<<endl;
    }
};

int main()
{
    int opcion;
    Tarea t;
    int pendientes=0;

    cout<<"MENU"<<endl;
    cout<<"1. Agregar tarea"<<endl;
    cout<<"2. Mostrar tareas"<<endl;
    cout<<"3. Recomendacion"<<endl;
    cout<<"Ingrese opcion: ";
    cin>>opcion;

    if(opcion==1)
    {
        ofstream archivo("tareas.txt", ios::app);

        cout<<"Nombre: ";
        cin>>t.nombre;
        cout<<"Prioridad (1-3): ";
        cin>>t.prioridad;
        cout<<"Fecha limite: ";
        cin>>t.fecha;

        t.estado="pendiente";

        archivo<<t.nombre<<" "<<t.prioridad<<" "<<t.fecha<<" "<<t.estado<<endl;
        archivo.close();
    }
    else if(opcion==2)
    {
        ifstream archivo("tareas.txt");

        while(archivo>>t.nombre>>t.prioridad>>t.fecha>>t.estado)
        {
            t.mostrar();
        }

        archivo.close();
    }
    else if(opcion==3)
    {
        ifstream archivo("tareas.txt");

        while(archivo>>t.nombre>>t.prioridad>>t.fecha>>t.estado)
        {
            if(t.estado=="pendiente")
            {
                pendientes++;
                if(t.prioridad==3)
                {
                    cout<<"Haz primero: "<<t.nombre<<endl;
                }
            }
        }

        if(pendientes>3)
        {
            cout<<"Tienes muchas tareas, organiza tu tiempo"<<endl;
        }

        archivo.close();
    }

    return 0;
}
