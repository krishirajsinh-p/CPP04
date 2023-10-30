/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:42:26 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 20:47:21 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	cout << "Dog Constructor is called" << endl;
	brain = new Brain(type);
}

Dog::Dog(const Dog& src) {
	cout << "Dog copy constructor called" << endl;
	*this = src;
}

Dog& Dog::operator=(const Dog& rhs) {
	cout << "Dog assignment operator called" << endl;
	if (this != &rhs) {
		this->type = rhs.type;
		this->brain = new Brain(type);
	}
	return *this;
}

Dog::~Dog(void) {
	cout << "Dog Destructor is called" << endl;
	delete brain;
}

void Dog::makeSound(void) const {
	cout << "Bark" << endl;
}
