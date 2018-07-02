/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.h                                              :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef User_H
#define User_H

#include "AEntity.h"
#include <iostream>
#include <string>

class User : public AEntity {
  public:
	User();
	User(const User &User);
	User &operator=(const User &rhs);
	User(int hp, std::string const &type, int maxHp, int numOfAttackableEntites,
		 AEntity **attackableEntities);
	void update();
	void attack();
	~User();
	int		  _score;
	int		  _lives;

  private:
	int		  _numOfAttackableEntities;
	AEntity **_attackableEntities;
	AAtk **   _atkInstances;
	int			_numOfAtkInstances;
};

#endif
