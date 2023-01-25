/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:12:38 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/25 16:52:49 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void	leaks() { system("leaks animal;"); } // check leaks

int main()
{
	atexit(leaks); // check leaks

	// make 10 animals - 5 dogs, 5 cats
	Animal	*animals[10];
	Brain	*brain;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	std::cout << std::endl << "---------------------------" << std::endl;
	std::cout << "animals[0] is " << animals[0]->getType() << std::endl;
	std::cout << "animals[1] is " << animals[1]->getType() << std::endl;
	brain = &animals[0]->getBrain();
	brain->setIdea(0, "my first idea!");
	brain->setIdea(1, "i am a dog! i want to walk around.");
	std::cout << "animals[0] brain idea 0 is " << animals[0]->getBrain().getIdea(0) << std::endl;
	std::cout << "animals[0] brain idea 1 is " << animals[0]->getBrain().getIdea(1) << std::endl;
	std::cout << "---------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];
	std::cout << "---------------------------" << std::endl << std::endl;

	// check deep copies

	// Dog
	std::cout << "check deep copy in Dog" << std::endl;
	std::cout << "---------------------------" << std::endl;
	Dog *dog1 = new Dog();
	dog1->getBrain().setIdea(0, "check deep copy;)");
	Dog *dog2 = new Dog(*dog1);
	std::cout << "---------------------------" << std::endl;
	std::cout << "dog1 brain idea 0 is " << dog1->getBrain().getIdea(0) << std::endl;
	std::cout << "dog2 brain idea 0 is " << dog2->getBrain().getIdea(0) << std::endl;
	std::cout << "---------------------------" << std::endl;
	delete dog1;
	delete dog2;
	std::cout << "---------------------------" << std::endl << std::endl;


	std::cout << "check deep copy in Cat" << std::endl;
	std::cout << "---------------------------" << std::endl;
	Cat *cat1 = new Cat();
	cat1->getBrain().setIdea(0, "check deep copy;)");
	Cat *cat2 = new Cat(*cat1);
	std::cout << "---------------------------" << std::endl;
	std::cout << "cat1 brain idea 0 is " << cat1->getBrain().getIdea(0) << std::endl;
	std::cout << "cat2 brain idea 0 is " << cat2->getBrain().getIdea(0) << std::endl;
	std::cout << "---------------------------" << std::endl;
	delete cat1;
	delete cat2;
	std::cout << "---------------------------" << std::endl << std::endl;

	return 0;
}
