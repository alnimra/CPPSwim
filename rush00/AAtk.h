/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAtk.h                                              :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAtk_H
#define AAtk_H

#include "AEntity.h"
#include "Point.h"
#include <curses.h>
#include <iostream>
#include <string>
#include <unistd.h>

class AEntity;
class AAtk {
  public:
	AAtk();
	AAtk(const AAtk &AAtk);
	AAtk &operator=(const AAtk &rhs);
	AAtk(std::string const &type, int atkDmg, const char *sprite);

	void		 place(int x, int y);
	void		 transTowards(int xComp, int yComp);
	void		 draw();
	void		 applyDamage(AEntity &entity);
	virtual void execute(AEntity **entities, int numEntites) = 0;
	virtual void init(const Point &loc) = 0;
	void remove();
	AEntity		*checkForCollisions(AEntity **entity, int numEntites);
	virtual ~AAtk();

	bool			isActive;
	const char *sprite;

  protected:
	Point		_loc;
	Point		_deltaLoc;
	std::string _type;
	int			_atkDmg;
};

#endif
