#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"
#include <vector>

class Laboratorio 
{
    vector<Computadora> computadoras;

public:
    Laboratorio();
    void agregarComputadora(const Computadora &p);
    void mostrar();
    void respaldar_tabla();
    void recuperar();
    void respaldar();

    void insertar(const Computadora &c, size_t pos);
    size_t size();
    void inicializar(const Computadora &c, size_t n);
    void eliminar(size_t pos);
    void ordenar();
    Computadora* buscar(const Computadora &c);
    void eliminar_ultimo();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &p)
    {
        l.agregarComputadora(p);

        return l;
    }
};

#endif