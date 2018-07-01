/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                           :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_H
#define Character_H

#include <iostream>
#include <string>

#include "Enemy.h"
#include "AWeapon.h"

class Character {
  public:
	Character();
	Character(const Character &Character);
	Character &operator=(const Character &rhs);
	Character(const std::string & name);

	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	const std::string getName() const;
	void print(std::ostream &o) const;
	~Character();

  private:
	std::string _name;
	AWeapon *weapon;
	int _ap;
};

std::ostream &operator<<(std::ostream &o, const Character &rhs);

#endif
