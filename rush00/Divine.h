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

#define KEYUP 65
#define KEYDOWN 66
#define KEYRIGHT 67
#define KEYLEFT 68
#define WIDTH 150
#define HEIGHT 42

class Divine {
  public:
	Divine();
	Divine(const Divine &divine);
	Divine &operator=(const Divine &rhs);

	void initNCurses();
	void drawWindow();
	void drawScrollingScenery();
	void update();
	void restart();
	void gameOver();

	void manageUserUpdate(int keyPressed);
	void manageEnemyUpdate();
	void makeRndPosForEnemies();
	void advanceEnemies();
	void drawAllEntites();
	~Divine();

	int isRunning;

  private:
	User *  user;
	int numEnemies;
	AEntity **enemies;
	int		wave;
	int scrolling;
};

std::ostream &operator<<(std::ostream &o, const Divine &rhs);

#endif
