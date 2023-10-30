/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:35:06 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 21:37:31 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal
{
	protected:
		string type;

	public:
		Animal(void);
		Animal(string type);
		Animal(const Animal& src);
		Animal& operator=(const Animal& rhs);
		virtual ~Animal(void);

		virtual void makeSound(void) const = 0;
		const string& getType(void) const;
};

#endif
