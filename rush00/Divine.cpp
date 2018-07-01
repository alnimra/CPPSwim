/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cc                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.h"

/* :> Default Constructor
	- Initializes: _val to 0
*/
Game::Game() : {}

/* :> Int Constructor
	- Converts: an int to the proper Game class form by shifting the bits by
	the fractional bits amount.
*/
Game::Game(const int f) : _val(f << _numOfFractionalBits) {}

/* :> Float Constructor
	- Converts: a float to the proper Game point value. In order to do so,
	first the number must be multiplied by 2^numOfFractionButs =
	1 << _numOfFractionBits. Then the number is rounded for precesion up to 8.
*/
Game::Game(const float f) : _val(roundf(f * (1 << _numOfFractionalBits))) {}

/* :> toInt
	- Converts: the Game point value to the int value, by dividing by
	2^_numOfFractionalBits or bit shifting by _numOfFractionalBits.
*/
int Game::toInt() const { return _val >> _numOfFractionalBits; }

/* :> toFloat
	- Converts: the Game point value to the floating point value.
*/
float Game::toFloat() const {
	return float(_val / ((float)(1 << _numOfFractionalBits)));
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Game::Game(const Game &f) { *this = f; }

/* :> = op Overload: Assignation operator
	- Copies the _val of the lhs to the rhs.
*/
Game &Game::operator=(const Game &rhs) {
	if (this == &rhs)
		return *this;
	_val = rhs.getRawBits();
	return *this;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Game::~Game() {}

/* :> << operator overload.
	- Takes in any output stream (ostream) and passed the float value of our
	Game value int to the stream. Then we return this stream so it can be used
	by the stream on the left side of "<<"
*/
std::ostream &operator<<(std::ostream &o, const Game &rhs) {
	o << rhs.toFloat();
	return o;
}
