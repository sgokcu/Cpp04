#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->setIdeas("I'm a Cat <3", i);
    std::cout << type << ": default constructor called for Cat." << std::endl;
}

Cat::Cat(const Cat& other)
{
	type = other.type;
	brain = new Brain();
	*brain = *other.brain;
}

Cat& Cat::operator=(const Cat& other)
{
	type = other.type;
	*brain = *other.brain;
	return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << type << ": destructor called for Cat." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "miyav." << std::endl;
}
std::string Cat::getType() const
{
    return type;
}

void Cat::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << brain->getIdeas(i) << std::endl;
}
