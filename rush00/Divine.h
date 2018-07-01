/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIVINE_H
#define DIVINE_H

#include <iostream>
#include <curses.h>

class Game {
  public:
	Game();
	Game(const Game &f);
	Game &operator=(const Game &rhs);

	void update();
	~Game();

  private:
	Enemy **enemies;
	Player *user;
	int wave;
};

std::ostream &operator<<(std::ostream &o, const Game &rhs);

#endif
