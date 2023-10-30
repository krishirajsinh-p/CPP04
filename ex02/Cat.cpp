/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:42:19 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 20:47:17 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	cout << "Cat Constructor is called" << endl;
	brain = new Brain(type);
}

Cat::Cat(const Cat& src) {
	cout << "Cat copy constructor called" << endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& rhs) {
	cout << "Cat assignment operator called" << endl;
	if (this != &rhs) {
		this->type = rhs.type;
		this->brain = new Brain(type);
	}
	return *this;
}

Cat::~Cat(void) {
	cout << "Cat Destructor is called" << endl;
	delete brain;
}

void Cat::makeSound(void) const {
	cout << "Meow" << endl;
}
