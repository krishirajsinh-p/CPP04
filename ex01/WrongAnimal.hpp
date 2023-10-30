/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:35:06 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 17:47:23 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
	protected:
		string type;

	public:
		WrongAnimal(void);
		WrongAnimal(string type);
		virtual ~WrongAnimal(void);

		virtual void makeSound(void) const;
		const string& getType(void) const;
};

#endif
