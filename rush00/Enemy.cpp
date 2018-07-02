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
	this->_deltaLoc.x = .01;
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
void Enemy::attack() { }

/* :> attack
	- Attacks the entity.
*/
void Enemy::die() {
	this->sprite = "😇";
	this->_deltaLoc.x = 0;
}
/* :> Destructor.
	- Everything on stack, so no worries.
*/
Enemy::~Enemy() {}
