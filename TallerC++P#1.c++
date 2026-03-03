// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    cout<<"¿Que es un lenguaje compilado?"<<endl;
    cout<<"Un lenguaje compilado es aquel cuyo código fuente se traduce totalmente a lenguaje máquina (binario) mediante un compilador antes de la ejecución, generando un archivo ejecutable directo para el sistema operativo. Esto permite una ejecución rápida y eficiente, ya que el procesador no necesita traducir en tiempo real. "<<endl;
    cout<<"¿Que es un lenguaje interpretado?"<<endl;
    cout<<"es un tipo de lenguaje de programación que no necesita ser compilado a código máquina antes de ejecutarse. En su lugar, un programa llamado intérprete lee, traduce y ejecuta el código fuente línea por línea en tiempo real. Esto permite un desarrollo más rápido, flexibilidad multiplataforma y depuración sencilla, aunque generalmente son más lentos que los compilados."<<endl;
    cout<<"¿A que tipo pertenece?"<<endl;
    cout<<"C++ es un lenguaje compilado. Esto significa que el código que escribes se compila en formato binario mediante un compilador. Este código binario es más directamente interpretable por el procesador de tu computadora sin necesidad de traducción adicional."<<endl;
    int i = 1;
    int opciones;
    while (i==1)
        {
            cout<<"Bienvenido al menu evolución y paradigma"<<endl;
            cout<<"Paradigmas"<<endl;
            cout<<"1.Estructurados"<<endl;
            cout<<"2.Orientado a objetos"<<endl;
            cout<<"3.Salir"<<endl;
            cout<<"Ingresa alguna de las 2 opciones para una breve explicación"<<endl;
            cout<<"Ingresa la 3 opcion para salir del programa"<<endl;
            cin>>opciones;
            if (opciones==1){
                    cout<<"El paradigma estructurado es un enfoque de programación que busca mejorar la claridad, calidad y tiempo de desarrollo de software utilizando únicamente tres estructuras de control: secuencia (pasos lineales), selección (if/else) e iteración (bucles), evitando saltos arbitrarios (GOTO). Se basa en subrutinas y código organizado, fundamental para la enseñanza y el mantenimiento."<<endl;
                }
            else if (opciones==2){
                    cout<<"El paradigma interpretativo, también conocido como cualitativo, naturalista o fenomenológico, busca comprender la realidad social a través de los significados y experiencias subjetivas de los individuos, en contraposición a la búsqueda de leyes generales del positivismo. Se centra en el contexto, la intersubjetividad y la interpretación, utilizando métodos etnográficos y cualitativos para analizar acciones humanas, creencias y motivaciones desde una perspectiva holística y dinámica. "<<endl;
                }
            else if (opciones==3){
                    cout<<"Muchas gracias por usar la aplicación";
                    i = 0;
                }
            else{
                    cout<<"Por favor ingresa alguna opciones valida";
                }
        }

    return 0;
}
