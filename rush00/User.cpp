/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.cpp                                             :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.h"
#include "FlyingPunch.h"

/* :> Default Constructor
 */
User::User(int hp, std::string const &type, int maxHp,
		   int numOfAttackableEntities, AEntity **attackableEntities)
	: AEntity(hp, type, maxHp, "👾"), _score(0), _lives(3),
	  _numOfAttackableEntities(numOfAttackableEntities),
	  _attackableEntities(attackableEntities){
	this->_deltaLoc.x = 2;
	this->_deltaLoc.y = 1;
	this->_loc.x = 3;
	this->_numOfAtkInstances = 20;
	this->_atkInstances = new AAtk *[this->_numOfAtkInstances];
	for (int i = 0; i < this->_numOfAtkInstances; i++) {
		this->_atkInstances[i] = new FlyingPunch();
	}
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
User::User(const User &user) : AEntity(user) { *this = user; }

/* :> attack
	- Attacks any entity
*/
void User::attack() {
//shot
	system("afplay ./shot.wav &");
	for (int i = 0; i < this->_numOfAtkInstances; i++) {
		if (!this->_atkInstances[i]->isActive) {
			this->_atkInstances[i]->init(this->_loc);
			return;
		}
	}
}

/* :> update
	- Updates user for game logic
*/
void User::update() {
	for (int i = 0; i < this->_numOfAtkInstances; i++) {
		if (this->_atkInstances[i]->isActive)
			this->_atkInstances[i]->execute(this->_attackableEntities,
											this->_numOfAttackableEntities);
	}
	this->draw();
}
/* :> = op Overload: Assignation operator
	- Copies all the member variables of the User to the rhs.
*/
User &User::operator=(const User &rhs) {
	if (this == &rhs)
		return *this;
	this->AEntity::operator=(rhs);
	return *this;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
User::~User() {}
