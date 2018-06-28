/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:18:57 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 18:18:57 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "Created a HumanB" << std::endl;
	this->_weapon = nullptr;
}

HumanB::~HumanB() { std::cout << this << ": Destroyed HumanB" << std::endl; }

void HumanB::setWeapon(Weapon &w) { this->_weapon = &w; }

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
			  << std::endl;
}
