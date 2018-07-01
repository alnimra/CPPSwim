/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:22:41 by mray              #+#    #+#             */
/*   Updated: 2018/06/30 23:22:41 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad {

	typedef struct marineList {
		ISpaceMarine *	 marine;
		struct marineList *next;
	} t_marineList;

  public:
	Squad(void);
	Squad(Squad &other);
	~Squad(void);
	Squad &operator=(Squad &other);

	int			  getCount(void) const;
	ISpaceMarine *getUnit(int n) const;
	int			  push(ISpaceMarine *);

  private:
	t_marineList *_list;
	int			  _numUnits;
};

#endif
