#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int numero;

    try
    {
        cout<<"Ingrese un numero entero: ";
        cin>>numero;

        if(cin.fail())
        {
            throw invalid_argument("Error de conversion");
        }

        if(numero < 0)
        {
            throw runtime_error("Numero negativo no permitido");
        }

        cout<<"Numero ingresado correctamente: "<<numero<<endl;
    }
    catch(invalid_argument &e)
    {
        cout<<"Error: entrada invalida"<<endl;
    }
    catch(runtime_error &e)
    {
        cout<<"Error: "<<e.what()<<endl;
    }

    return 0;
}
