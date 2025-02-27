#pragma once
class PuertaSalida
{
private:
    int x, y;
    bool estaAbierta;

public:
    // Constructor
    PuertaSalida(int posX, int posY) : x(posX), y(posY), estaAbierta(false) {}

    // M�todos para acceder a los atributos privados (get)
    int getX() const { return x; }
    int getY() const { return y; }
    bool getEstaAbierta() const { return estaAbierta; }

    // M�todos para modificar los atributos privados (set)
    void setX(int nuevoX) { x = nuevoX; }
    void setY(int nuevoY) { y = nuevoY; }
    void abrir() { estaAbierta = true; }

    // M�todo para verificar colisi�n con el jugador
    bool verificarColision(int jugadorX, int jugadorY) const {
        return (jugadorX == x && jugadorY == y && estaAbierta);
    }
};

