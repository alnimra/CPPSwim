/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cc                                             :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

/* :> Default Constructor
 */
Point::Point() : x(0), y(0) {}

/* :> Custom Constructor
 */
Point::Point(double x, double y) : x(x), y(y) {}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Point::Point(const Point &pt) { *this = pt; }

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the Point to the rhs.
*/
Point &Point::operator=(const Point &rhs) {
	if (this == &rhs)
		return *this;
	this->x = rhs.x;
	this->y = rhs.y;
	return *this;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Point::~Point() {}
