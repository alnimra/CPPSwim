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

/* :> Default Constructor
 */
User::User(int hp, std::string const &type, int maxHp, int atkDmg)
	: AEntity(hp, type, maxHp, atkDmg, "🙃") {}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
User::User(const User &user) : AEntity(user) { *this = user; }

/* :> attack
	- Attacks the entity.
*/
void User::attack(AEntity &entity) { (void)entity; }
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
