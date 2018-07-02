/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlyingPunch.cc                                       :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlyingPunch.h"
#include "Divine.h"

/* :> Default Constructor
 */
FlyingPunch::FlyingPunch() : AAtk("Flying Punch", 1, "🤜") {
	this->_deltaLoc.x = 0.1;
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
FlyingPunch::FlyingPunch(const FlyingPunch &flyingPunch) : AAtk(flyingPunch) {}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the FlyingPunch to the rhs.
*/
FlyingPunch &FlyingPunch::operator=(const FlyingPunch &rhs) {
	this->AAtk::operator=(rhs);
	return *this;
}

/* :> draw
	- draw the user to the correct location on ncurses window
*/
void FlyingPunch::execute(AEntity **entities, int numEntities) {
	Enemy *collidedEntity;
	this->transTowards(1, 0);
	if ((collidedEntity = ((Enemy*)this->checkForCollisions(entities, numEntities))) !=
		nullptr) {
		this->remove();
		collidedEntity->takeDamage(this->_atkDmg);
	}
	this->draw();
	if (this->_loc.x > WIDTH)
		this->remove();
}

/* :> draw
	- draw the user to the correct location on ncurses window
*/
void FlyingPunch::init(const Point &loc) {
	this->isActive = true;
	this->_loc.x = loc.x + 1;
	this->_loc.y = loc.y;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
FlyingPunch::~FlyingPunch() {}
