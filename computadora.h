#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iomanip>
#include <iostream>
using namespace std;

class Computadora 
{
private:
    string sistema;
    string marca;
    string procesador;
    int ram;
public:
    Computadora();
    Computadora(const string &sistema, const string &marca, const string &procesador, int ram);
    void setSistema(const string &v);
    string getSistema();
    void setMarca(const string &v);
    string getMarca();
    void setProcesador(const string &v);
    string getProcesador();
    void setRam(int v);
    int getRam();

    friend ostream& operator<<(ostream &out, const Computadora &p)
    {
        out << left;
        out << setw(10) << p.sistema;
        out << setw(10) << p.marca;
        out << setw(12) << p.procesador;
        out << setw(6) << p.ram;
        out <<endl;

        return out;
    } 
    friend istream& operator>>(istream &in, Computadora &p)
    {
        // string temp;
        // float fuerza;
        // int salud;

        cout << "Sistema operativo: ";
        getline(cin, p.sistema);

        cout << "Marca: ";
        getline(cin, p.marca);

        cout << "Procesador: ";
        getline(cin, p.procesador);

        cout << "Memoria RAM: ";
        cin >> p.ram;


        return in;
    }

    bool operator==(const Computadora& c)
    {

        return sistema == c.sistema;
    }

    bool operator==(const Computadora& c) const
    {

        return sistema == c.sistema;
    }

    bool operator<(const Computadora& c)
    {
        return sistema < c.sistema;
    }

    bool operator<(const Computadora& c) const
    {
        return sistema < c.sistema;
    }
};

#endif