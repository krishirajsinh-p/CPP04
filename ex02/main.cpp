/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:08:25 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 21:31:02 by kpuwar           ###   ########.fr       */
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
		const Animal* animals[] = {new Dog(), new Dog(), new Cat(), new Cat()};
		cout << endl;
		for (int i = 0; i < 4; i++)
			delete animals[i];
	}

	cout << "======================================================================" << endl;

	{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		cout << endl;
		delete cat;
		delete dog;
	}

	cout << "======================================================================" << endl;

	{
		Dog basicCat;
		cout << endl;
		Dog copyCat = basicCat;
		cout << endl;
	}

	cout << "======================================================================" << endl;

	return 0;
}
