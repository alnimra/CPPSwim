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

#include <curses.h>
#include <iostream>
#include <string>
#include <unistd.h>

#include "AAtk.h"
#include "Point.h"
class AAtk;
class AEntity {
  public:
	AEntity();
	AEntity(const AEntity &AEntity);
	AEntity &operator=(const AEntity &rhs);
	AEntity(int hp, std::string const &type, int maxHp, const char *sprite);

	void		 place(int x, int y);
	void		 transTowards(int xComp, int yComp);
	void		 draw();
	bool		 isDead();
	void		 changeHp(int hp);
	void		 takeDamage(int amount);
	bool			 isCollidedWith(Point loc, int width, int height);
	virtual void attack() = 0;
	virtual ~AEntity();

	const char *sprite;

	Point		_loc;
  protected:
	int			_hp;
	Point		_deltaLoc;
	std::string _type;
	int			_maxHp;
	AAtk *		_atk;
};

#endif
