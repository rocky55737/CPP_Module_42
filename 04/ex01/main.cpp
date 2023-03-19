#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal *ani_arr[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			ani_arr[i] = new Dog();
		else
			ani_arr[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
	 	delete ani_arr[i];
	
	const Cat a;
	const Cat b(a);
	a.getBrain()->setIdea(1, "new!!");
	std::cout << a.getBrain()->getIdea()[1] << std::endl;
	std::cout << b.getBrain()->getIdea()[1] << std::endl;

	return (0);
}