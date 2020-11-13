#include "laboratorio.h"
#include <fstream>
#include <algorithm>

Laboratorio::Laboratorio()
{

}

void Laboratorio::agregarComputadora(const Computadora &p)
{
    computadoras.push_back(p);
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(10) << "Sistema";
    cout << setw(10) << "Marca";
    cout << setw(12) << "Procesador";
    cout << setw(6) << "RAM";
    cout << endl;
    for (size_t i=0; i<computadoras.size(); i++)
    {
        Computadora &p = computadoras[i];
        cout << p;
        /*cout <<"Sistema operativo: "<<p.getSistema()<< endl;
        cout <<"Marca: "<<p.getMarca()<< endl;
        cout <<"Procesador: "<<p.getProcesador()<< endl;
        cout <<"Memoria RAM: "<<p.getRam()<< endl;
        cout <<endl;*/
    }
}

/*void Laboratorio::respaldar_tabla()
{
    
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()){
        Computadora &p = arreglo[2];
        archivo << p.getSistema() << endl;
        archivo << p.getMarca() << endl;
        archivo << p.getProcesador() << endl;
        archivo << p.getRam() << endl;
        for (size_t i=0; i<computadoras.size(); i++)
        {
            Computadora &p = computadoras[i];
            cout << p;
        }
    }
    archivo.close();
}*/

void Laboratorio::recuperar()

{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()){
        string temp;
        int ram;
        Computadora p;


        while (true)
        {
            getline(archivo, temp); //Sistema operativo
            if(archivo.eof()){
                break;
            }
            p.setSistema(temp);

            getline(archivo, temp); //Marca
            p.setMarca(temp);

            getline(archivo, temp); //Procesador
            p.setProcesador(temp);

            getline(archivo, temp); //RAM
            ram = stoi(temp);
            p.setRam(ram);

            agregarComputadora(p);
        }
        
    }
    archivo.close();
}


void Laboratorio::respaldar()
{
    
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for (size_t i=0; i<computadoras.size(); i++){
        Computadora &p = computadoras[i];
        archivo << p.getSistema() << endl;
        archivo << p.getMarca() << endl;
        archivo << p.getProcesador() << endl;
        archivo << p.getRam() << endl;


        }
    }
    archivo.close();
}
void Laboratorio::respaldar_tabla()
{
    
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(10) << "Sistema";
        archivo << setw(10) << "Marca";
        archivo << setw(12) << "Procesador";
        archivo << setw(6) << "RAM";
        archivo << endl;
        for (size_t i=0; i<computadoras.size(); i++)
        {
            Computadora &p = computadoras[i];
            cout << p;
        }
    }
    archivo.close();
}

void Laboratorio::insertar(const Computadora &c, size_t pos)
{
    computadoras.insert(computadoras.begin()+pos, c);
}

size_t Laboratorio::size()
{
    return computadoras.size();
}

void Laboratorio::inicializar(const Computadora &c, size_t n)
{
    computadoras = vector<Computadora>(n, c);
}

void Laboratorio::eliminar(size_t pos)
{
    computadoras.erase(computadoras.begin()+pos);
}

void Laboratorio::ordenar()
{
    sort(computadoras.begin(), computadoras.end());
}

Computadora* Laboratorio::buscar(const Computadora &c)
{
    auto it = find(computadoras.begin(), computadoras.end(), c);

    if(it == computadoras.end()){
        return nullptr;
    }
    else{
        return &(*it);
    }
}

void Laboratorio::eliminar_ultimo(){
        if(computadoras.empty()){
            cout << "Vector esta vácio" << endl;
        }
        else{
            computadoras.pop_back();
        }
}