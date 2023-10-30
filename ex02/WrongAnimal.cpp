/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:39:26 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 18:32:55 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	this->type = "WrongAnimal";
	cout << "WrongAnimal Constructor called" << endl;
}

WrongAnimal::WrongAnimal(string type) {
	this->type = type;
	cout << "WrongAnimal Constructor called for " << this->type << endl;
}

WrongAnimal::~WrongAnimal(void) {
	cout << "WrongAnimal Destructor called for " << this->type << endl;
}

const string& WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::makeSound(void) const {
	cout << "WrongAnimal making some sound" << endl;
}
