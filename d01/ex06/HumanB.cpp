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

HumanB::HumanB(Weapon *weapon, std::string name)
	: _weapon(weapon), _name(name) {}

HumanB::~HumanB() { std::cout << this << ": Destroyed HumanB" << std::endl; }

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
			  << std::endl;
}
