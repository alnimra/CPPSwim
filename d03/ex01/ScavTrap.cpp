/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cc                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include <ctime>
/* :> Default Constructor
 */
ScavTrap::ScavTrap()
	: _hp(100), _maxHp(100), _ep(50), _maxEp(50), _lvl(1), _name(""),
	  _meleeAtkDmg(20), _rangedAtkDmg(15), _armorAtkReduc(3) {
	std::cout << "Get ready for some ScavTrap face time!" << std::endl;
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
ScavTrap::ScavTrap(const ScavTrap &ScavTrap) {
	std::cout << "Get ready for some other ScavTrap's face time!" << std::endl;
	*this = ScavTrap;
}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the ScavTrap to the rhs.
*/
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_title = rhs._title;
	return *this;
}

/* :> Name pass ScavTrap constructor
 */
ScavTrap::ScavTrap(const std::string name)
	: _name(name), _hp(100), _maxHp(100), _ep(50), _maxEp(50), _lvl(1),
	  _meleeAtkDmg(20), _rangedAtkDmg(15), _armorAtkReduc(3) {
	std::cout << "ScavTrap " << name << " -- start bootup sequence."
			  << std::endl;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
ScavTrap::~ScavTrap() {
	std::cout << _name << ": The robot ScavTrap is dead, long live the robot!"
			  << std::endl;
}

const std::string ScavTrap::challenges = {"you", "we", "me", "us", "who?"};
