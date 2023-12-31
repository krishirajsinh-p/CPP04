/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:42:19 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 17:48:11 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	cout << "Cat Constructor is called" << endl;
}

Cat::~Cat(void) {
	cout << "Cat Destructor is called" << endl;
}

void Cat::makeSound(void) const {
	cout << "Meow" << endl;
}
