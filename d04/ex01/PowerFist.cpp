/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cc                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.h"

/* :> Default Constructor
 */
PowerFist::PowerFist()
	: AWeapon("Power Fist", 8, 50) {}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
PowerFist::PowerFist(const PowerFist &PowerFist)
	: AWeapon(PowerFist) {}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the PowerFist to the rhs.
*/
PowerFist &PowerFist::operator=(const PowerFist &rhs) {
	this->AWeapon::operator=(rhs);
	return *this;
}

/* attack
	-couts etc.
*/
void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
/* :> Destructor.
	- Everything on stack, so no worries.
*/
PowerFist::~PowerFist() {}
