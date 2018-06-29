/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cc                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

/* :> Defining the static variable for the significant figures we want to calc
to. Defined by the pdf to 8 bits (2^8 = 256). */
const int Fixed::_numOfFractionalBits = 8;

/* :> Defining the static function for min and max. Just to note: we use a hack
to convert the Fixed number to float, because we didn't write a const operator
overload for >=... too lazy :P
*/
Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	return (f1.toFloat() >= f2.toFloat()) ? f2 : f1;
}
const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
	return (f1.toFloat() >= f2.toFloat()) ? f2 : f1;
}
Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return (f1.toFloat() >= f2.toFloat()) ? f1 : f2;
}
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
	return (f1.toFloat() >= f2.toFloat()) ? f1 : f2;
}

/* :> Default Constructor
	- Initializes: _val to 0
*/
Fixed::Fixed() : _val(0) {}

/* :> Int Constructor
	- Converts: an int to the proper fixed class form by shifting the bits by
	the fractional bits amount.
*/
Fixed::Fixed(const int f) : _val(f << _numOfFractionalBits) {}

/* :> Float Constructor
	- Converts: a float to the proper fixed point value. In order to do so,
	first the number must be multiplied by 2^numOfFractionButs =
	1 << _numOfFractionBits. Then the number is rounded for precesion up to 8.
*/
Fixed::Fixed(const float f) : _val(roundf(f * (1 << _numOfFractionalBits))) {}

/* :> toInt
	- Converts: the fixed point value to the int value, by dividing by
	2^_numOfFractionalBits or bit shifting by _numOfFractionalBits.
*/
int Fixed::toInt() const { return _val >> _numOfFractionalBits; }

/* :> toFloat
	- Converts: the fixed point value to the floating point value.
*/
float Fixed::toFloat() const {
	return float(_val / ((float)(1 << _numOfFractionalBits)));
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Fixed::Fixed(const Fixed &f) { *this = f; }

/* :> = op Overload: Assignation operator
	- Copies the _val of the lhs to the rhs.
*/
Fixed &Fixed::operator=(const Fixed &rhs) {
	if (this == &rhs)
		return *this;
	_val = rhs.getRawBits();
	return *this;
}

/* :> getRawBits
	- Returns: the raw int _val member variable of the fixed point.
*/
int Fixed::getRawBits() const { return _val; }

/* :> setRawBits
	- Sets: the raw int _val member variable of the fixed point, directly
	modifying it to the int "raw" passed in.
*/
void Fixed::setRawBits(int const raw) { _val = raw; }

/* :: Comparision operator overloads.
	- Self-explanatory.
*/
bool Fixed::operator>(const Fixed &rhs) { return _val > rhs.getRawBits(); }

bool Fixed::operator<(const Fixed &rhs) { return _val < rhs.getRawBits(); }

bool Fixed::operator>=(const Fixed &rhs) { return _val >= rhs.getRawBits(); }

bool Fixed::operator<=(const Fixed &rhs) { return _val <= rhs.getRawBits(); }

bool Fixed::operator==(const Fixed &rhs) { return _val == rhs.getRawBits(); }

bool Fixed::operator!=(const Fixed &rhs) { return _val != rhs.getRawBits(); }

/* :: Arthimetic operator overloads.
	- return an actual new Fixed object on the stack with the new
	arthimetic val, otherwise, self-explanatory.
	(Because you normally don't want to modify the values that are being
	operated on)
*/
Fixed Fixed::operator+(const Fixed &rhs) const {
	return Fixed(_val + rhs.getRawBits());
}
Fixed Fixed::operator-(const Fixed &rhs) const {
	return Fixed(_val - rhs.getRawBits());
}
// Using .toFloat here, because the numbers are too big for int operations...
// sigh...
Fixed Fixed::operator*(const Fixed &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}
Fixed Fixed::operator/(const Fixed &rhs) const {
	if (rhs.toFloat() != 0)
		return Fixed(this->toFloat() / rhs.toFloat());
	std::cout << "Sorry, no division by zero..." << std::endl;
	return (Fixed(0));
}

/* :: -crement operator overloads.
	- Not exactly self explanatory.               */

/* :> -- (pre-decrement) op Overload: Assignation operator
	- Returns: a reference to the Fixed class,
	this is because when you do a pre-fix crement, the crement should be
	applied on the same line. (Remember??)
*/
Fixed &Fixed::operator--() {
	_val -= 1;
	return *this;
}
/* :> -- (post-decrement) op Overload: Assignation operator
	- Returns: a copy of the old value, because we modify the new value,
	but rememeber, when you to a post-fix -crement the should be "applied"
	after the current line.
*/
Fixed Fixed::operator--(int) {
	Fixed copy(*this);
	_val -= 1;
	return copy;
}

/* Same for increment...self explanatory with help from above.
 */
Fixed &Fixed::operator++() {
	_val += 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed copy(*this);
	_val += 1;
	return copy;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Fixed::~Fixed() {}

/* :> << operator overload.
	- Takes in any output stream (ostream) and passed the float value of our
	fixed value int to the stream. Then we return this stream so it can be used
	by the stream on the left side of "<<"
*/
std::ostream &operator<<(std::ostream &o, const Fixed &rhs) {
	o << rhs.toFloat();
	return o;
}
