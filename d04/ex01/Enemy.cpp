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
Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Enemy::Enemy(const Enemy &Enemy) { *this = Enemy; }

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the Enemy to the rhs.
*/
Enemy &Enemy::operator=(const Enemy &rhs) {
	if (this == &rhs)
		return *this;
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return *this;
}

std::string Enemy::getType() const { return this->_type; }
int			Enemy::getHP() const { return this->_hp; }

void Enemy::takeDamage(int amount) {
	if (amount > 0)
		this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Enemy::~Enemy() {}
