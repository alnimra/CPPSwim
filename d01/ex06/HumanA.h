/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:18:52 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 18:18:52 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <iostream>
#include <string>
#include "Weapon.h"

class HumanA {
  public:
	HumanA();
	HumanA(Weapon *weapon, std::string name);
	~HumanA();
	void attack();
	private:
		Weapon *_weapon;
		std::string _name;
};

#endif
