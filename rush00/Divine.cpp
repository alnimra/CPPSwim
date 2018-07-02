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
Divine::Divine() : isRunning(1), numEnemies(20), wave(1)
{
	this->enemies = new AEntity *[numEnemies];
	for (int i = 0; i < numEnemies; i++)
		this->enemies[i] = new Enemy(1, "Enemy", 1);
	this->user = new User(1, "User", 1, numEnemies, this->enemies);
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
Divine &Divine::operator=(const Divine &rhs)
{
	if (this == &rhs)
		return *this;
	this->user = rhs.user;
	this->numEnemies = rhs.numEnemies;
	// Deep Copy
	// TODO: Need to make cloning functions for the enemies later for this to
	// work
	this->enemies = new AEntity *[this->numEnemies];
	for (int i = 0; i < this->numEnemies; i++)
		this->enemies[i] = new Enemy(1, "Enemy", 1);
	this->wave = rhs.wave;
	return *this;
}

/* :> initNCurses.
	- Initialize: the NCurses area.
*/
void Divine::initNCurses()
{
	//mp3
	system("afplay ./bgm.mp3 &");
	// Emoji Support
	setlocale(LC_ALL, "");
	initscr();
	noecho();
	nodelay(stdscr, true);
	curs_set(false);
	keypad(stdscr, true);
}

/* :> drawWindows.
	- Initialize: the NCurses area.
*/
void Divine::drawWindow()
{
	mvprintw(HEIGHT + 1, 0, "ANGELS AND DEMONS");
	mvprintw(HEIGHT + 3, 0,
			 ("Your holiness: " + std::to_string(user->_score)).c_str());

	for (int i = 0; i < WIDTH; i++)
	{
		mvprintw(0, i, "-");
		mvprintw(HEIGHT, i, "-");
	}
	for (int i = 0; i < HEIGHT; i++)
	{
		mvprintw(i, 0, "|");
		mvprintw(i, WIDTH, "|");
	}
}

/* :> drawScrollingScenery
 */
void Divine::drawScrollingScenery()
{
	int rndStart = rand() % 100;
	for (int j = 0; j < HEIGHT; j += 5)
	{
		for (int i = this->scrolling; i < WIDTH; i += 2)
		{
			if (i == rndStart)
				mvprintw(j, i, "*");
			else
				mvprintw(j, i, ".");
		}
	}
	if (this->scrolling)
		this->scrolling = 0;
	else
		this->scrolling = 1;
}

/* :> manageUserUpdate.
	- Manages: the user update events.
*/
void Divine::manageUserUpdate(int keyPressed)
{
	if (keyPressed == KEY_UP)
		user->transTowards(0, -1);
	else if (keyPressed == KEY_DOWN)
		user->transTowards(0, 1);
	else if (keyPressed == ' ')
		user->attack();
	else if (keyPressed == 27)
		this->isRunning = 0;
	user->update();
}

/* :> manageUserUpdate.
	- Manages: the user update events.
*/
void Divine::manageEnemyUpdate()
{
	this->drawAllEntites();
	this->advanceEnemies();
}

/* :> manageUserUpdate.
	- Manages: the user update events.
*/
void Divine::makeRndPosForEnemies()
{
	int rndX;
	for (int i = 0; i < this->numEnemies; i++)
	{
		rndX = rand() % this->numEnemies;
		this->enemies[i]->place(WIDTH + rndX, ((i)*2) + 3);
	}
}

/* :> drawAllEntites
	- Manages: the user update events.
*/
void Divine::drawAllEntites()
{
	for (int i = 0; i < this->numEnemies; i++)
	{
		if ((this->enemies[i])->isCollidedWith(user->_loc, 0, 0) && strcmp(this->enemies[i]->sprite, "😇") != 0){
			this->restart();
			user->_score = 0;
			user->_lives--;
			if(user->_lives == 0)
				this->gameOver();
		}
		this->enemies[i]->draw();
		if (this->enemies[i]->isDead() &&
			strcmp(this->enemies[i]->sprite, "😇") != 0)
		{
			user->_score++;
			((Enemy *)this->enemies[i])->die();
		}
	}
}
/* :> advanceAllEntites.
	- Manages: the user update events.
*/
void Divine::advanceEnemies()
{
	for (int i = 0; i < this->numEnemies; i++)
	{
		((Enemy *)this->enemies[i])->move(*user);
	}
}

/* :> update
	- Update: the game state.
*/
void Divine::restart()
{
	clear();
	this->drawWindow();
	this->makeRndPosForEnemies();
}

/* :> update
	- Update: the game state.
*/
void Divine::gameOver()
{
	clear();
	sleep(1);
	this->isRunning = 0;
}

/* :> update
	- Update: the game state.
*/
void Divine::update()
{
	int ch = getch();
	clear();
	this->drawWindow();
	this->drawScrollingScenery();
	this->manageUserUpdate(ch);
	this->manageEnemyUpdate();
	refresh();
}

/* :> Destructor.
	- Cleanup the enemies...
*/
Divine::~Divine()
{
	for (int i = 0; i < this->numEnemies; i++)
		delete this->enemies[i];
	delete[] this->enemies;
	endwin();
}
