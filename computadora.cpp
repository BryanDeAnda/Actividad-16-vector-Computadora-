#include "computadora.h"

Computadora::Computadora()
{
    
}

Computadora::Computadora(const string &sistema, const string &marca, const string &procesador, int ram)
{
    this->sistema = sistema;
    this->marca = marca;
    this->procesador = procesador;
    this->ram = ram;
}

void Computadora::setSistema(const string &v)
{
    sistema = v;
}
string Computadora::getSistema()
{
    return sistema;
}

void Computadora::setMarca(const string &v)
{
    marca = v;
}
string Computadora::getMarca()
{
    return marca;
}

void Computadora::setProcesador(const string &v)
{
    procesador = v;
}
string Computadora::getProcesador()
{
    return procesador;
}

void Computadora::setRam(int v)
{
    ram = v;
}

int Computadora::getRam()
{
    return ram;
}