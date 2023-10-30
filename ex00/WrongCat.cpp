/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:42:19 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 18:35:16 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	cout << "WrongCat Constructor is called" << endl;
}

WrongCat::~WrongCat(void) {
	cout << "WrongCat Destructor is called" << endl;
}

void WrongCat::makeSound(void) const {
	cout << "WrongCat says Meow" << endl;
}
