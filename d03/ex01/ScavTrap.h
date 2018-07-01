/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
class ScavTrap {
  public:
	ScavTrap();
	ScavTrap(const ScavTrap &ScavTrap);
	ScavTrap &operator=(const ScavTrap &rhs);
	ScavTrap(const std::string name);

	void meleeAttack(const std::string &target);
	void rangedAttack(const std::string &target);
	void meleeAndRangedAttack(const std::string &target);
	void rangedAndMeleeAttack(const std::string &target);
	void sleepAttack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void changeHp(int num);
	void changeEp(int num);

	void challenge(std::string challengeType, std::string const & target);
	void challengeNewcomer(std::string const & target);

	std::string getName();
	int getMeleeAtkDmg();
	int getRangedAtkDmg();
	int getArmorAtkReduc();
	~ScavTrap();

  private:
	int _hp;
	int _maxHp;
	int _ep;
	int _maxEp;
	unsigned int _lvl;
	std::string _name;
	unsigned int _meleeAtkDmg;
	unsigned int _rangedAtkDmg;
	unsigned int _armorAtkReduc;
	static const std::string challenges;
};

#endif
