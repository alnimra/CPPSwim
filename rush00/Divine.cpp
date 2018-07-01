/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Divine.cc                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Divine.h"

/* :> Default Constructor
	- Initializes: _val to 0
*/
Divine::Divine()
	: isRunning(1), user(new User(1, "User", 1, 1)), numEnemies(10), wave(1) {
	this->enemies = new Enemy *[numEnemies];
	for (int i = 0; i < numEnemies; i++)
		this->enemies[i] = new Enemy(1, "Enemy", 1, 1);

	this->makeRndPosForEnemies();
	// Init ncurses
	this->initNCurses();
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Divine::Divine(const Divine &divine) { *this = divine; }

/* :> = op Overload: Assignation operator
	- Copies the _val of the lhs to the rhs.
*/
Divine &Divine::operator=(const Divine &rhs) {
	if (this == &rhs)
		return *this;
	this->user = rhs.user;
	this->numEnemies = rhs.numEnemies;
	// Deep Copy
	// TODO: Need to make cloning functions for the enemies later for this to
	// work
	this->enemies = new Enemy *[this->numEnemies];
	for (int i = 0; i < this->numEnemies; i++)
		this->enemies[i] = new Enemy(1, "Enemy", 1, 1);
	this->wave = rhs.wave;
	return *this;
}

/* :> initNCurses.
	- Initialize: the NCurses area.
*/
void Divine::initNCurses() {
	// Emoji Support
	setlocale(LC_ALL, "");
	initscr();
	noecho();
	nodelay(stdscr, true);
	curs_set(FALSE);
}

/* :> manageUserUpdate.
	- Manages: the user update events.
*/
void Divine::manageUserUpdate(int keyPressed) {
	if (keyPressed == KEYUP)
		user->transTowards(0, -1);
	else if (keyPressed == KEYDOWN)
		user->transTowards(0, 1);
	else if (keyPressed == KEYLEFT)
		user->transTowards(-1, 0);
	else if (keyPressed == KEYRIGHT)
		user->transTowards(1, 0);
	user->draw();
}

/* :> manageUserUpdate.
	- Manages: the user update events.
*/
void Divine::manageEnemyUpdate() {
	this->drawAllEntites();
	this->advanceEnemies();
}

/* :> manageUserUpdate.
	- Manages: the user update events.
*/
void Divine::makeRndPosForEnemies() {
	int rndX;
	for (int i = 0; i < this->numEnemies; i++) {
		rndX = rand() % 10;
		this->enemies[i]->place(60 + rndX, ((i)*2) + 3);
	}
}

/* :> drawAllEntites
	- Manages: the user update events.
*/
void Divine::drawAllEntites() {
	for (int i = 0; i < this->numEnemies; i++)
		this->enemies[i]->draw();
}
/* :> advanceAllEntites.
	- Manages: the user update events.
*/
void Divine::advanceEnemies() {
	for (int i = 0; i < this->numEnemies; i++)
		this->enemies[i]->transTowards(-1, 0);
}

/* :> update
	- Update: the game state.
*/
int  ch;
void Divine::update() {
	ch = getch();
	clear();
	this->manageUserUpdate(ch);
	this->manageEnemyUpdate();
	refresh();
}

/* :> Destructor.
	- Cleanup the enemies...
*/
Divine::~Divine() {
	for (int i = 0; i < this->numEnemies; i++)
		delete this->enemies[i];
	delete[]this->enemies;
	endwin();
}
