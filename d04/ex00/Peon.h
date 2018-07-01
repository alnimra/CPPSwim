/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.h                                              :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include <iostream>
#include <string>
#include "Victim.h"

class Peon : public Victim{
  public:
	Peon();
	Peon(const Peon &Peon);
	Peon &operator=(const Peon &rhs);
	Peon(const std::string name);

	void getPolymorphed() const;

	~Peon();
};

std::ostream &operator<<(std::ostream &o, const Peon &rhs);

#endif
