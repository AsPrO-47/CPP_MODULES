#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name_): ClapTrap(name_){
    this->h_point = 100;
    this->e_points = 50;
    this->at_damage = 20;
    std::cout << "ScavTrap " << name_  << " is born" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "default constructor for ScavTrap called"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other; // just need the copy assigement to be explicitly declared
    std::cout << "copy constructor for ScavTrap called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);

    // all the atributtes copying handeled by the ClapTrap copy assigement
    std::cout << "copy assigment for ScavTrap called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "destructor for ScavTrap  called" << std::endl;
}

void   ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (!this->h_point)
    {
        std::cout << "ScavTrap "<< this->name << " is dead" << std::endl;
        return ;
    }
    if (!this->e_points)
    {
        std::cout << "ScavTrap " << this->name << " have no enough energy points to attack !!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name <<  " attacks " << target <<  " causing " << this->at_damage << " points of damage!" << std::endl;
    this->e_points--;
}

