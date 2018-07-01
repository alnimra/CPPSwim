/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cc                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.h"

/* :> Default Constructor
 */
AWeapon::AWeapon(const std::string &name, const int apcost, int damage)
	: _name(name), _apcost(apcost), _damage(damage) {
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
AWeapon::AWeapon(const AWeapon &AWeapon) {
	*this = AWeapon;
}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the AWeapon to the rhs.
*/
AWeapon &AWeapon::operator=(const AWeapon &rhs) {
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	return *this;
}

std::string AWeapon::getName() const { return this->_name; }
int			AWeapon::getAPCost() const { return this->_apcost; }
int			AWeapon::getDamage() const { return this->_damage; }

/* :> Destructor.
	- Everything on stack, so no worries.
*/
AWeapon::~AWeapon() {}
