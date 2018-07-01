/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cc                                          :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

/* :> Default Constructor
 */
Character::Character(const std::string &name)
	: _name(name), weapon(nullptr), _ap(40) {}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Character::Character(const Character &Character) { *this = Character; }

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the Character to the rhs.
*/
Character &Character::operator=(const Character &rhs) {
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->weapon = rhs.weapon;
	return *this;
}
void Character::changeAp(int degOfChange) {
	this->_ap += degOfChange;
	if (this->_ap < 0)
		_ap = 0;
	else if (this->_ap > 40)
		_ap = 40;
}
const std::string Character::getName() const { return this->_name; }
void			  Character::recoverAP() { this->changeAp(10); }
void			  Character::equip(AWeapon *newWeapon) { weapon = newWeapon; }

void Character::attack(Enemy *enemy) {
	if (_ap > 0 && this->weapon != nullptr) {
		std::cout << this->_name + " attacks " + enemy->getType() + " with a " +
						 this->weapon->getName()
				  << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		this->changeAp(-(this->weapon->getAPCost()));
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

void Character::print(std::ostream &o) const {
	std::string weaponStr = "is unarmed";
	if (this->weapon != nullptr)
		weaponStr = "wields a " + this->weapon->getName();
	o << this->_name + " has " + std::to_string(this->_ap) + " AP and " +
			 weaponStr
	  << std::endl;
}
/* :> Destructor.
	- Everything on stack, so no worries.
*/
Character::~Character() {}

std::ostream &operator<<(std::ostream &o, const Character &rhs) {
	rhs.print(o);
	return o;
}
