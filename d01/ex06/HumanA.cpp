/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:18:47 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 18:18:47 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _weapon(weapon), _name(name) {}

HumanA::~HumanA() { std::cout << this << ": Destroyed HumanA" << std::endl; }

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType()
			  << std::endl;
}
