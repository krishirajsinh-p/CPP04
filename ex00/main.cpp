/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:08:25 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 18:42:01 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	cout << "======================================================================" << endl;
	
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		cout << endl;
		cout << meta->getType() << " " << endl;
		cout << j->getType() << " " << endl;
		cout << i->getType() << " " << endl;
		cout << endl;
		meta->makeSound();
		j->makeSound();
		i->makeSound();
		cout << endl;

		delete i;
		delete j;
		delete meta;
	}

	cout << "======================================================================" << endl;

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		cout << endl;
		cout << meta->getType() << " " << endl;
		cout << i->getType() << " " << endl;
		cout << endl;
		meta->makeSound();
		i->makeSound();
		cout << endl;

		delete i;
		delete meta;
	}

	cout << "======================================================================" << endl;

	return 0;
}
