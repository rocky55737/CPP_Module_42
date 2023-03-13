#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();
	const WrongAnimal wrong_j(*wrong_i);
	std::cout << wrong_i->getType() << " " << std::endl;
	std::cout << wrong_j.getType() << " " << std::endl;
	std::cout << wrong_meta->getType() << " " << std::endl;
	wrong_i->makeSound();
	wrong_j.makeSound();
	wrong_meta->makeSound();
	delete wrong_i;
	delete wrong_meta;

	return (0);
}
