/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.h                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AEntity_H
#define AEntity_H

#include "Point.h"
#include <iostream>
#include <string>

class AEntity {
  public:
	AEntity();
	AEntity(const AEntity &AEntity);
	AEntity &operator=(const AEntity &rhs);
	AEntity(int hp, std::string const &type, int maxHp, int atkDmgi,
			std::string sprite);

	void		 place(int x, int y);
	void		 changeHp(int hp);
	void		 takeDamage(int amount);
	virtual void attack(AEntity &entity) = 0;
	virtual ~AEntity();

	std::string sprite;

  protected:
	int			_hp;
	Point		_loc;
	Point		_deltaLoc;
	std::string _type;
	int			_maxHp;
	int			_atkDmg;
};

#endif
