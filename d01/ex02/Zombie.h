/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 11:15:44 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 11:15:44 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
  public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();

  private:
	std::string _name;
	std::string _type;
};

#endif
