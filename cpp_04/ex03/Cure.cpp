#include "Cure.hpp"

Cure::~Cure()
{
    // std::cout << "destructor for Cure called\n";
}

Cure::Cure() : AMateria("cure")
{
    std::cout << "a cure is build\n";
}

Cure::Cure(Cure const &other) : AMateria(other)
{
    *this = other;
    std::cout << "copy constructor for Cure called\n";
}

Cure& Cure::operator=(Cure const &other)
{
    if (this != &other)
    {
        // copy elements
    }
    std::cout << "copy assigement for Cure called\n";
    return *this;
}

void Cure::use(ICharacter &target)
{
    std::cout << "Cure: * heals " << target.getName() <<  " wounds *" << std::endl;
}