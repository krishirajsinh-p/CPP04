/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:51:33 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 20:28:17 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Brain {
	private:
		string ideas[100];
		
	public:
		Brain(const string &type);
		~Brain(void);
};

#endif
