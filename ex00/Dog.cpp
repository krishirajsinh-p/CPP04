/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:42:26 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 17:48:15 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	cout << "Dog Constructor is called" << endl;
}

Dog::~Dog(void) {
	cout << "Dog Destructor is called" << endl;
}

void Dog::makeSound(void) const {
	cout << "Bark" << endl;
}
