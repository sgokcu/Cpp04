#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->setIdeas("I'm a Dog <3", i);
    std::cout << type << ": default constructor called for Dog." << std::endl;
}

Dog::Dog(const Dog& other)
{
	type = other.type;
	brain = new Brain();
	*brain = *other.brain;
}

Dog& Dog::operator=(const Dog& other)
{
	type = other.type;
	*brain = *other.brain;
	return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << type << ": destructor called for Dog." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "hav hav." << std::endl;
}

std::string Dog::getType() const
{
    return type;
}

void Dog::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << brain->getIdeas(i) << std::endl;
}
