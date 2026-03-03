#include <iostream>
using namespace std;

int main()
{
    int numero,n,factorial=1,num;
    float radio,area;

    cout<<"¿Que deseas hacer hoy?"<<endl;
    cout<<"MENU"<<endl;
    cout<<"1. Calcular área de un círculo."<<endl;
    cout<<"2. Calcular factorial."<<endl;
    cout<<"3. Verificar si un número es par o impar."<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>numero;

    if(numero==1)
    {
        cout<<"Ingresa el valor del radio: ";
        cin>>radio;
        area=3.14*(radio*radio);
        cout<<"Area: "<<area<<"cm^3"<<endl;
    }
    else if(numero==2)
    {
        cout<<"Ingrese el numero: ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            factorial=factorial*i;
        }
        cout<<"El factorial de: "<<n<<"es: "<<factorial;
    }
    else
    {
        cout<<"Ingrese el numero: ";
        cin>>num;
        if(num % 2 == 0)
        {
            cout<<"El numero es par";
        }
        else
        {
            cout<<"El numero es impar"
        }
    }

    return 0;
}
