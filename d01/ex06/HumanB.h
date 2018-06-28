/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:19:04 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 18:19:04 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <iostream>
#include <string>
#include "Weapon.h"

class HumanB {
  public:
	HumanB();
	HumanB(Weapon *weapon, std::string name);
	~HumanB();
	void attack();
	private:
		Weapon *_weapon;
		std::string _name;
};

#endif
