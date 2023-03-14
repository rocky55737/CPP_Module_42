#include "Dog.hpp"
#include "Cat.hpp"
#include <stdlib.h>

void leaks(void)
{
	system("leaks a.out");
}

int main()
{
	atexit(leaks);
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	
	// Animal *ani_arr[4];
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (i < 2)
	// 		ani_arr[i] = new Dog();
	// 	else
	// 		ani_arr[i] = new Cat();
	// }
	// for (int i = 0; i < 4; i++)
	//  	delete ani_arr[i];

	const Cat i;
	const Cat j = i;
	const Cat k(j);

	return (0);
}