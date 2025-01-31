#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_): ClapTrap(name_){
    this->h_point = 100;
    this->e_points = 100;
    this->at_damage = 30;
    std::cout << "FragTrap " << name_  << " is born" << std::endl;

}

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "default constructor for FragTrap called"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other; // nothing to be copied just for debuging
    std::cout << "copy constructor for FragTrap called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) 
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "copy assigment for FragTrap called" << std::endl;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "destructor for FragTrap  called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << ClapTrap::name << " high fives mate" << std::endl;
}