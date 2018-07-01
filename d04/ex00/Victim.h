/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.h                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>
#include <string>

class Victim {
  public:
	Victim();
	Victim(const Victim &Victim);
	Victim &operator=(const Victim &rhs);
	Victim(const std::string name);

	void print(std::ostream &o) const;
	virtual void getPolymorphed() const;

	virtual ~Victim();

  protected:
	std::string _name;
};

std::ostream &operator<<(std::ostream &o, const Victim &rhs);

#endif
