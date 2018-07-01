/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.cc                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AEntity.h"

/* :> Default Constructor
 */
AEntity::AEntity(int hp, std::string const &type, int maxHp, int atkDmg,
				 std::string sprite)
	: sprite(sprite), _hp(hp), _type(type), _maxHp(maxHp), _atkDmg(atkDmg){}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
AEntity::AEntity(const AEntity &AEntity) { *this = AEntity; }

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the AEntity to the rhs.
*/
AEntity &AEntity::operator=(const AEntity &rhs) {
	if (this == &rhs)
		return *this;
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	this->_maxHp = rhs._maxHp;
	this->_atkDmg = rhs._atkDmg;
	return *this;
}

/* :> place
	- changes entity loc to the x and y passed.
*/
void AEntity::place(int x, int y) {
	this->_loc.x = x;
	this->_loc.y = y;
}

/* :> changeHp
	- change the hp of the entity
*/
void AEntity::changeHp(int degreeOfChange) {
	this->_hp += degreeOfChange;
	if (this->_hp < 0)
		this->_hp = 0;
	else if (this->_hp > this->_maxHp)
		this->_hp = this->_maxHp;
}

/* :> takeDamage
	- inflict amount damage on the Entity
*/
void AEntity::takeDamage(int amount) {
	if (amount > 0)
		this->changeHp(amount);
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
AEntity::~AEntity() {}
