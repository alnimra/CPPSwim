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
Divine::Divine() : isRunning(1), user(new User(1, "User", 1, 1)), numEnemies(10), wave(1){
	this->enemies = new Enemy*[numEnemies];
	for(int i = 0; i < numEnemies; i++)
		this->enemies[i] = new Enemy(1, "Enemy", 1, 1);

	//Init ncurses
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
	//Deep Copy
	//TODO: Need to make cloning functions for the enemies later for this to work
	this->enemies = new Enemy*[this->numEnemies];
	for(int i = 0; i < this->numEnemies; i++)
		this->enemies[i] = new Enemy(1, "Enemy", 1, 1);
	this->wave = rhs.wave;
	return *this;
}

/* :> initNCurses.
	- Initialize: the NCurses area.
*/
void Divine::initNCurses(){
	initscr();
	noecho();
	curs_set(FALSE);
}

/* :> update
	- Update: the game state.
*/
void Divine::update(){
	clear();

}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Divine::~Divine() {
	endwin();
}
