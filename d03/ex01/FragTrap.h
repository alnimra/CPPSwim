/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>
class FragTrap {
  public:
	FragTrap();
	FragTrap(const FragTrap &fragtrap);
	FragTrap &operator=(const FragTrap &rhs);
	FragTrap(const std::string name);

	void meleeAttack(const std::string &target);
	void rangedAttack(const std::string &target);
	void meleeAndRangedAttack(const std::string &target);
	void rangedAndMeleeAttack(const std::string &target);
	void sleepAttack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void changeHp(int num);
	void changeEp(int num);

	void vaulthunter_dot_exe(std::string const & target);
	std::string getName();
	int getMeleeAtkDmg();
	int getRangedAtkDmg();
	int getArmorAtkReduc();
	~FragTrap();

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
};

#endif
