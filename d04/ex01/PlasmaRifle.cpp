/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cc                                       :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.h"

/* :> Default Constructor
 */
PlasmaRifle::PlasmaRifle()
	: AWeapon("Plasma Rifle", 5, 21) {}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle)
	: AWeapon(plasmaRifle) {}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the PlasmaRifle to the rhs.
*/
PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &rhs) {
	this->AWeapon::operator=(rhs);
	return *this;
}

/* attack
	-couts etc.
*/
void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
/* :> Destructor.
	- Everything on stack, so no worries.
*/
PlasmaRifle::~PlasmaRifle() {}
