/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cc                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.h"

/* :> Default Constructor
 */
Enemy::Enemy(int hp, std::string const &type, int maxHp)
	: AEntity(hp, type, maxHp, "😈") {
	this->_deltaLoc.x = .02;
	this->_deltaLoc.y = .01;
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Enemy::Enemy(const Enemy &enemy) : AEntity(enemy) {}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the Enemy to the rhs.
*/
Enemy &Enemy::operator=(const Enemy &rhs) {
	this->AEntity::operator=(rhs);
	return *this;
}

/* :> attack
	- Attacks the entity.
*/
void Enemy::attack() {}

/* :> attack
	- Attacks the entity.
*/
void Enemy::die() { this->sprite = "😇";
this->_deltaLoc.x = -0.1; }
/* :> follow
	- follow a entity
*/
void Enemy::follow(AEntity &e) {
	double dX = 0;
	double dY = 0;
	if ((int)this->_loc.x > (int)e._loc.x)
		dX = -1;
	else if ((int)this->_loc.x < (int)e._loc.x)
		dX = 1;
	if ((int)this->_loc.y > (int)e._loc.y)
		dY = -1;
	else if ((int)this->_loc.y < (int)e._loc.y)
		dY = 1;
	this->transTowards(dX, dY);
}

/* :> move
	- move the player accordingly.
*/
void Enemy::move(AEntity &e) {
	if (this->_loc.x <= 60 && strcmp(this->sprite, "😈") == 0)
		this->follow(e);
	else
		this->transTowards(-1, 0);
}
/* :> Destructor.
	- Everything on stack, so no worries.
*/
Enemy::~Enemy() {}
