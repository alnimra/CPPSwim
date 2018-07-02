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
#include <cmath>
/* :> Default Constructor
 */
AEntity::AEntity(int hp, std::string const &type, int maxHp, const char *sprite)
	: sprite(sprite), _hp(hp), _type(type), _maxHp(maxHp), _atk(nullptr) {}

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
	return *this;
}

/* :> place
	- changes entity loc to the x and y passed.
*/
void AEntity::place(int x, int y) {
	this->_loc.x = x;
	this->_loc.y = y;
}

/* :> place
	- changes entity loc to the x and y passed.
*/
bool AEntity::isDead() {
	if(this->_hp <= 0)
		return true;
	return false;
}

/* :> transTowards
	- draw the user to the correct location on ncurses window
*/
void AEntity::transTowards(int xComp, int yComp) {
	this->_loc.x += xComp * this->_deltaLoc.x;
	this->_loc.y += yComp * this->_deltaLoc.y;
}

/* :> draw
	- draw the user to the correct location on ncurses window
*/
void AEntity::draw() {
	mvprintw(this->_loc.y, this->_loc.x, this->sprite);
	mvprintw(
		0, 0,
		(std::to_string(this->_loc.x) + ", " + std::to_string(this->_loc.y))
			.c_str());
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
		this->changeHp(-amount);
}

/* :> isCollidedWith
	- check for collision with a point, and with and height
*/
bool AEntity::isCollidedWith(Point loc, int width, int height) {
	if((int)this->_loc.x <= ((int)loc.x + width) && (int)this->_loc.x >= ((int)loc.x)
	&& (int)this->_loc.y <= ((int)loc.y + height) && (int)this->_loc.y >= ((int)loc.y))
		return true;
	return false;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
AEntity::~AEntity() {}
