/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cc                                           :+:      :+: :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.h"

/* :> Default Constructor
 */
RadScorpion::RadScorpion()
	: Enemy(80, "Rad Scorpion") {
		std::cout << "* click click click *" << std::endl;
	}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
RadScorpion::RadScorpion(const RadScorpion &radScorpion) : Enemy(radScorpion){
}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the RadScorpion to the rhs.
*/
RadScorpion &RadScorpion::operator=(const RadScorpion &rhs) {
	this->Enemy::operator=(rhs);
	return *this;
}

void RadScorpion::takeDamage(int amount) {
	Enemy::takeDamage(amount - 3);
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
RadScorpion::~RadScorpion() {
		std::cout << "* SPROTCH *" << std::endl;
}
