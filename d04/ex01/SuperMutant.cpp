/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cc                                           :+:      :+: :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.h"

/* :> Default Constructor
 */
SuperMutant::SuperMutant()
	: Enemy(170, "Super Mutant") {
		std::cout << "* Gaaah. Me want smash heads !*" << std::endl;
	}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
SuperMutant::SuperMutant(const SuperMutant &superMutant) : Enemy(superMutant){
}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the SuperMutant to the rhs.
*/
SuperMutant &SuperMutant::operator=(const SuperMutant &rhs) {
	this->Enemy::operator=(rhs);
	return *this;
}

void SuperMutant::takeDamage(int amount) {
	Enemy::takeDamage(amount - 3);
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
SuperMutant::~SuperMutant() {
		std::cout << "* Aaargh... *" << std::endl;
}
