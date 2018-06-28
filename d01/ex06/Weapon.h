/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:18:42 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 18:18:42 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
  public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string getType() const;
	void setType(std::string type);
	private:
		std::string _type;
};

#endif
