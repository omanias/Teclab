#include <iostream>
#include <string>

class Ship
{
public:
    Ship(int category, int fire_power, int shield, int speed, int crew_capacity);

    // Método para imprimir la información de la nave
    void printShipInfo() const;

    // Método para mejorar la potencia de fuego de la nave
    void upgradeFirePower(int increase);

private:
    int category;
    int fire_power;
    int shield;
    int speed;
    int crew_capacity;
};

// Implementación del constructor
Ship::Ship(int category, int fire_power, int shield, int speed, int crew_capacity)
    : category(category), fire_power(fire_power), shield(shield), speed(speed), crew_capacity(crew_capacity) {}

// Método para imprimir la información de la nave
void Ship::printShipInfo() const
{
    std::cout << "Categoría: " << category << std::endl;
    std::cout << "Potencia de fuego: " << fire_power << std::endl;
    std::cout << "Escudo: " << shield << std::endl;
    std::cout << "Velocidad: " << speed << std::endl;
    std::cout << "Capacidad de tripulación: " << crew_capacity << std::endl;
}

// Método para mejorar la potencia de fuego de la nave
void Ship::upgradeFirePower(int increase)
{
    fire_power += increase;
}
