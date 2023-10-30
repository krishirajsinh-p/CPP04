/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:53:16 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 20:28:10 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(const string &type) {
	cout << "Brain Constructor called for " << type << endl;
}

Brain::~Brain(void) {
	cout << "Brain Destructor called" << endl;
}
