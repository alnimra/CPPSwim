/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EntityGroup.cc                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EntityGroup.h"

/* :> Default Constructor
 */
EntityGroup::EntityGroup(int hp, std::string const &type, int maxHp, int atkDmg)
	: AEntity(hp, type, maxHp, atkDmg, "😈") {}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
EntityGroup::EntityGroup(const EntityGroup &EntityGroup) : AEntity(EntityGroup){ }

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the EntityGroup to the rhs.
*/
EntityGroup &EntityGroup::operator=(const EntityGroup &rhs) {
	this->AEntity::operator=(rhs);
	return *this;
}

/* :> attack
	- Attacks the entity.
*/
void EntityGroup::attack(AEntity &entity){
	(void) entity;
}
/* :> Destructor.
	- Everything on stack, so no worries.
*/
EntityGroup::~EntityGroup() {}
