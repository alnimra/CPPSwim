/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Divine.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIVINE_H
#define DIVINE_H

#include "Enemy.h"
#include "User.h"
#include <curses.h>
#include <iostream>
class Divine {
  public:
	Divine();
	Divine(const Divine &divine);
	Divine &operator=(const Divine &rhs);

	void initNCurses();
	void update();
	~Divine();

	int isRunning;

  private:
	User *  user;
	int numEnemies;
	Enemy **enemies;
	int		wave;
};

std::ostream &operator<<(std::ostream &o, const Divine &rhs);

#endif
