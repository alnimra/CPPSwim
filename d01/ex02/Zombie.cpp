/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 11:15:43 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 11:15:43 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/* :> Zombie Constructor
*/
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){}

/* :> Zombie Deconstructor
*/
Zombie::~Zombie(void){
	std::cout << "Zombie (" << this->_name << ", " << this->_type << "): dead"
	<< std::endl;
}

/* :> Zombie::announce
	- Announces the Zombies presence.
*/
void Zombie::announce(void){
	std::cout << "(" << this->_name << ", " << this->_type << "): wheeeeeee!"
	<< std::endl;
}
