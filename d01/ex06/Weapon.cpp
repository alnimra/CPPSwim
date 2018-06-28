/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:18:32 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 18:18:32 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon() {
	std::cout << this << ": Created Weapon of No Type" << std::endl;
}
Weapon::Weapon(std::string type) : _type(type){
	std::cout << this << ": Created Weapon of Type: " << type << std::endl;
}
Weapon::~Weapon(){
	std::cout << this << ": Destroyed Weapon: " << this->_type << std::endl;
}
const std::string Weapon::getType() const{
	return this->_type;
}

void Weapon::setType(std::string type){
	this->_type = type;
}
