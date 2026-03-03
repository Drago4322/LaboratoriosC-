#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct Producto {
    int id;
    string nombre;
    double precio;
    int cantidad;
};
static void agregarProducto() {
    Producto p;
    cout << "Ingresa el id del producto: ";
    cin >> p.id;
    cout << endl;
    cout << "Ingresa el nombre del producto: ";
    cin >> p.nombre;
    cout << endl;
    cout << "Ingresa el precio del producto: ";
    cin >> p.precio;
    cout << endl;
    cout << "Ingresa la cantidad de productos que ingresan: ";
    cin >> p.cantidad;
    cout << endl;
    fstream archivo;
    archivo.open("Inventario.txt", ios::out | ios::app);
    if (archivo.is_open()) {
        archivo << p.id << "|" << p.nombre << "|" << p.precio << "|" << p.cantidad << endl;
        cout << "El archivo fue actualizado correctamente"<<endl;
        archivo.close();
    }
    else {
        cout << "Error al intentar abrir el archivo." << endl;
    }


}
void listarProductos() {
    fstream archivo;
    archivo.open("Inventario.txt", ios::in);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    }
    else {
        cout << "Error al intentar abrir el archivo." << endl;
    }
}
void buscarProductos() {
    int id;
    cout << "Ingresa el id del producto a buscar: ";
    cin >> id;
    fstream archivo;
    archivo.open("Inventario.txt", ios::in);
    if (archivo.is_open()) {
        string linea;
        bool encontrado = false;
        while (getline(archivo, linea)) {
			size_t pos = linea.find("|");
            if (pos != string::npos) {
                int idProducto = stoi(linea.substr(0, pos));
                if (idProducto == id) {
                    cout << "Producto encontrado: " << linea << endl;
                    encontrado = true;
                }
            }
        }
    }
    

}
void actualizarCantidad() {
    cout << "Ingresa el id del producto a actualizar: ";
    int id;
    cin >> id;

    fstream archivo("Inventario.txt", ios::in);

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    vector<string> lineas;
    string linea;
    bool encontrado = false;

    while (getline(archivo, linea)) {
        size_t pos = linea.find("|");
        int idProducto = stoi(linea.substr(0, pos));

        if (idProducto == id) {
            cout << "Producto encontrado: " << linea << endl;
            cout << "Ingresa la nueva cantidad: ";
            int nuevaCantidad;
            cin >> nuevaCantidad;

            size_t pos2 = linea.find("|", pos + 1);
            size_t pos3 = linea.find("|", pos2 + 1);

            string nombre = linea.substr(pos + 1, pos2 - pos - 1);
            string precio = linea.substr(pos2 + 1, pos3 - pos2 - 1);

            linea = to_string(idProducto) + "|" + nombre + "|" + precio + "|" + to_string(nuevaCantidad);

            encontrado = true;
        }

        lineas.push_back(linea);
    }

    archivo.close();

    if (!encontrado) {
        cout << "Producto no encontrado." << endl;
        return;
    }

    archivo.open("Inventario.txt", ios::out);

    for (string l : lineas) {
        archivo << l << endl;
    }

    archivo.close();

    cout << "Cantidad actualizada correctamente." << endl;
}
void calcularValorInventario() {
    fstream archivo;
    archivo.open("Inventario.txt", ios::in);
    if (archivo.is_open()) {
        string linea;
        double valorTotal = 0.0;
        while (getline(archivo, linea)) {
            size_t pos1 = linea.find("|");
            size_t pos2 = linea.find("|", pos1 + 1);
            size_t pos3 = linea.find("|", pos2 + 1);
            int cantidad = stoi(linea.substr(pos3 + 1));
            double precio = stod(linea.substr(pos2 + 1, pos3 - pos2 - 1));
            valorTotal += cantidad * precio;
        }
        cout << "El valor total del inventario es: " << valorTotal << endl;
        archivo.close();
    }
    else {
        cout << "Error al intentar abrir el archivo." << endl;
    }
}
void verificararchivo() {
    fstream archivo;
    archivo.open("Inventario.txt", ios::in);
    if (archivo.is_open()) {
        cout << "Archivo existente";
        archivo.close();
    }
    else
    {
        cout << "No existe el archivo se procedera a crearlo" << endl;
        archivo.open("Inventario.txt", ios::out);
        archivo.close();
    }
}

void menu() {
    int opcion;
    while (true) {
        cout << "Bienvenido al menu del D1" << endl;
        cout << "1.Agregar productos" << endl;
        cout << "2.Listar productos" << endl;
        cout << "3.Busqueda de productos por ID" << endl;
        cout << "4.Actualizar cantidades de productos" << endl;
        cout << "5.Calcular el valor de los inventarios" << endl;
        cout << "6.Salir del programa" << endl;
        cout << "Ingresa alguna de las opciones: ";
        cin >> opcion;
        switch (opcion) {
        case 1: cout << "Empezaremos agregar productos" << endl;
            agregarProducto();
            break;
        case 2: cout << "--Lista de productos--" << endl;
			listarProductos();
            break;
        case 3: cout << "Iniciando la busqueda de productos por ID" << endl;
			buscarProductos();
            break;
        case 4: cout << "Iniciando actualización de productos" << endl;
			actualizarCantidad();
            break;
        case 5: cout << "Calcularemos el valor de todos los inventarios" << endl;
			calcularValorInventario();
            break;
        case 6: cout << "Muchas gracias por usar este programa";
            return;
        default: cout << "Opcion invalida" << endl;
        }

    }

}

int main() {
    verificararchivo();
    menu();
    return 0;
}
