#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Laboratorio l;
    string op;
    
    while (true)
    {
        cout << "1) Agregar computadora" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Insertar" << endl;
        cout << "6) inicializar" << endl;
        cout << "7) Eliminar" << endl;
        cout << "8) Ordenar" << endl;
        cout << "9) Eliminar ultimo" << endl;
        cout << "10) Buscar" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if(op == "1"){
            Computadora c;

            cin >> c;

            l.agregarComputadora(c);
            cin.ignore();
        }
        else if(op == "2"){
            l.mostrar();
        }
        else if(op == "3"){
            l.respaldar();
        }
        else if(op == "4"){
            l.recuperar();
        }
        else if(op == "5"){
            Computadora c;

            cin >> c;

            size_t pos;
            cout << "posición: ";
            cin >> pos; cin.ignore();

            if(pos >= l.size()){
                cout << "Posición no válida" << endl;
            }
            else{
                l.insertar(c, pos);
            }
        }
        else if(op == "6"){
            Computadora c;

            cin >> c;

            size_t n;
            cout << "n: ";
            cin >> n; cin.ignore();

            l.inicializar(c, n);

        }
        else if(op == "7"){
            size_t pos;
            cout << "posición: ";
            cin >> pos; cin.ignore();

            if(pos >= l.size()){
                cout << "Posición no válida" << endl;
            }
            else{
                l.eliminar(pos);
            }
        }
        else if(op == "8"){
            l.ordenar();
        }
        else if(op == "9"){
            l.eliminar_ultimo();
        }
        else if(op == "10"){
            Computadora c;
            cin >> c; cin.ignore();

            Computadora *ptr = l.buscar(c);

            if(ptr == nullptr){
                cout << "No encontrado" << endl;
            }
            else{
                cout << *ptr << endl;
            }
        }
        else if(op == "0"){
            break;
        }
    }
    

    return 0;
}