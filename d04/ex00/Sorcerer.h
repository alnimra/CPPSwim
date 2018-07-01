/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.h                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include <string>
#include "Victim.h"

class Sorcerer {
  public:
	Sorcerer();
	Sorcerer(const Sorcerer &Sorcerer);
	Sorcerer &operator=(const Sorcerer &rhs);
	Sorcerer(const std::string name, const std::string title);

	void print(std::ostream &o) const;
	void polymorph(Victim const &) const;

	~Sorcerer();

  private:
	std::string _name;
	std::string _title;
};

std::ostream &operator<<(std::ostream &o, const Sorcerer &rhs);

#endif
