/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 10:49:09 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 10:49:12 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.h"

/* :> Pony Constructor
 */
Pony::Pony(std::string color) : _color(color) {
	std::cout << "Pony created with color: " << this->_color << std::endl;
}

/* :> Pony Deconstructor
 */
Pony::~Pony() {
	std::cout << "Pony deleted with color: " << this->_color << std::endl;
}
