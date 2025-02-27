#include<iostream>
#pragma once
using namespace std;
class IndicadorVidas
{
private:
    int vidas;
    int maxVidas;

public:
    // Constructor
    IndicadorVidas(int maxVidas) : vidas(maxVidas), maxVidas(maxVidas) {}

    // Métodos para acceder a los atributos privados (get)
    int getVidas() const { return vidas; }
    int getMaxVidas() const { return maxVidas; }

    // Métodos para modificar los atributos privados (set)
    void setVidas(int nuevasVidas) {
        if (nuevasVidas >= 0 && nuevasVidas <= maxVidas) {
            vidas = nuevasVidas;
        }
    }

    // Método para dibujar el indicador de vidas
    void dibujar() const {
        cout << "Vidas: ";
        for (int i = 0; i < vidas; i++) {
            cout << "♥ "; // Corazones para representar vidas
        }
        cout << endl;
    }
};

