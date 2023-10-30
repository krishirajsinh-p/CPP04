/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:39:26 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 20:44:24 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	this->type = "Animal";
	cout << "Animal Constructor called" << endl;
}

Animal::Animal(string type) {
	this->type = type;
	cout << "Animal Constructor called for " << this->type << endl;
}

Animal::Animal(const Animal& src) {
	cout << "Animal copy constructor called" << endl;
	*this = src;
}

Animal& Animal::operator=(const Animal& rhs) {
	cout << "Animal assignment operator called" << endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Animal::~Animal() {
	cout << "Animal Destructor called for " << this->type << endl;
}

const string& Animal::getType(void) const {
	return this->type;
}

void Animal::makeSound(void) const {
	cout << "Animal making some sound" << endl;
}
