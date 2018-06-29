/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cc                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include <ctime>
/* :> Default Constructor
 */
FragTrap::FragTrap() {
	std::cout << "Get ready for some Fragtrap face time!" << std::endl;
	_hp = 100;
	_maxHp = 100;
	_ep = 100;
	_maxEp = 100;
	_lvl = 1;
	_name = "";
	_meleeAtkDmg = 30;
	_rangedAtkDmg = 20;
	_armorAtkReduc = 5;
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
FragTrap::FragTrap(const FragTrap &fragtrap) {
	std::cout << "Get ready for some other Fragtrap's face time!" << std::endl;
	*this = fragtrap;
}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the FragTrap to the rhs.
*/
FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	if (this == &rhs)
		return *this;
	_hp = rhs._hp;
	_maxHp = rhs._maxHp;
	_ep = rhs._ep;
	_lvl = rhs._lvl;
	_name = rhs._name;
	_meleeAtkDmg = rhs._meleeAtkDmg;
	_rangedAtkDmg = rhs._rangedAtkDmg;
	_armorAtkReduc = rhs._armorAtkReduc;
	return *this;
}

/* :> Name pass FragTrap constructor
 */
FragTrap::FragTrap(const std::string name) : _name(name) {
	std::cout << "Fragtrap " << name << " -- start bootup sequence."
			  << std::endl;
	_hp = 100;
	_maxHp = 100;
	_ep = 100;
	_maxEp = 100;
	_lvl = 1;
	_meleeAtkDmg = 30;
	_rangedAtkDmg = 20;
	_armorAtkReduc = 5;
}

/* :> setEp
	- Sets: the hp of the FragTrap, but making sure the hp never exceeds the max
   hp.
	- Makes: sure the hp cannot fall below 0.
 */
void FragTrap::changeEp(int num) {
	_ep += num;
	if (_ep < 0)
		_ep = 0;
	else if (_ep > _maxEp)
		_ep = _maxEp;
}

/* :> setHp
	- Sets: the hp of the FragTrap, but making sure the hp never exceeds the max
   hp.
	- Makes: sure the hp cannot fall below 0.
 */
void FragTrap::changeHp(int num) {
	_hp += num;
	if (_hp < 0)
		_hp = 0;
	else if (_hp > _maxHp)
		_hp = _maxHp;
}

/* :> FragTrap action methods, self explanatory.
 */
void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks, " << target << " causing "
			  << _meleeAtkDmg << " points of damage!" << std::endl;
}

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks at range, " << target
			  << "causing " << _rangedAtkDmg << " points of damage!"
			  << std::endl;
}
void FragTrap::meleeAndRangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks with melee and ranged -.-, "
			  << target << " causing " << _meleeAtkDmg + _rangedAtkDmg
			  << " points of damage!" << std::endl;
}

void FragTrap::rangedAndMeleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks at range and with melee :o, "
			  << target << "causing " << _meleeAtkDmg + _rangedAtkDmg
			  << " points of damage!" << std::endl;
}

void FragTrap::sleepAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks with sleepp x.x, " << target
			  << "causing 0.0000000"
			  << " points of damage!" << std::endl;
}

/* :> vaulthunter_dot_exe
	- Picks a random function pointer from FragTraps attacks, all stored in
	actionFxs.
	- Else self explanatory...da ze...
*/
void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::cout << "I, " << _name << " am Vaulthunting... " << target
			  << std::endl;
	typedef void (FragTrap::*Action)(const std::string &target);
	Action actionFxs[5] = {&FragTrap::meleeAttack, &FragTrap::rangedAttack,
						   &FragTrap::meleeAndRangedAttack,
						   &FragTrap::rangedAndMeleeAttack,
						   &FragTrap::sleepAttack};
	srand(time(NULL));
	int actionNum = rand() % 5;
	(this->*(actionFxs[actionNum]))(target);
}
void FragTrap::takeDamage(unsigned int amount) {
	amount -= _armorAtkReduc;
	changeHp(-amount);
	std::cout << "FR4G-TP " << _name << " takes " << amount
			  << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP " << _name << " repairs " << amount << " points"
			  << std::endl;
}

/* Required Getters...
 */

std::string FragTrap::getName() { return _name; }
int			FragTrap::getMeleeAtkDmg() { return _meleeAtkDmg; }
int			FragTrap::getRangedAtkDmg() { return _rangedAtkDmg; }
int			FragTrap::getArmorAtkReduc() { return _armorAtkReduc; }
/* :> Destructor.
	- Everything on stack, so no worries.
*/
FragTrap::~FragTrap() {
	std::cout << "The robot is dead, long live the robot!" << std::endl;
}
