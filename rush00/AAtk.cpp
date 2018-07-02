/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAtk.cc                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAtk.h"

/* :> Default Constructor
 */
AAtk::AAtk(std::string const &type, int atkDmg, const char *sprite)
	: isActive(false), sprite(sprite), _type(type), _atkDmg(atkDmg) {}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
AAtk::AAtk(const AAtk &AAtk) { *this = AAtk; }

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the AAtk to the rhs.
*/
AAtk &AAtk::operator=(const AAtk &rhs) {
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	this->_atkDmg = rhs._atkDmg;
	return *this;
}

/* :> place
	- changes entity loc to the x and y passed.
*/
void AAtk::place(int x, int y) {
	this->_loc.x = x;
	this->_loc.y = y;
}

/* :> transTowards
	- draw the user to the correct location on ncurses window
*/
void AAtk::transTowards(int xComp, int yComp) {
	this->_loc.x += xComp * this->_deltaLoc.x;
	this->_loc.y += yComp * this->_deltaLoc.y;
}

/* :> remove
	- Set: atk to inactive
*/
void AAtk::remove() { this->isActive = false; }
/* :> draw
	- draw the user to the correct location on ncurses window
*/
void AAtk::draw() { mvprintw(this->_loc.y, this->_loc.x, this->sprite); }

/* :> applyDamage
	- apply damage to the entity
*/
void AAtk::applyDamage(AEntity &entity) { entity.takeDamage(_atkDmg); }

/* :> checkForCollisions
	- draw the user to the correct location on ncurses window
*/
AEntity *AAtk::checkForCollisions(AEntity **entities, int numEntities) {
	for (int i = 0; i < numEntities; i++) {
		if (entities[i]->isCollidedWith(this->_loc, 0, 0)) {
			return entities[i];
		}
	}
	return nullptr;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
AAtk::~AAtk() {}
