/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cc                                          :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.h"
#include <ctime>
/* :> Default Constructor
 */
Sorcerer::Sorcerer(const std::string name, const std::string title)
	: _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", "
			  << "is born !" << std::endl;
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Sorcerer::Sorcerer(const Sorcerer &sorcerer) {
	std::cout << this->_name << ", " << this->_title << ", "
			  << "is born !" << std::endl;
	*this = sorcerer;
}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the Sorcerer to the rhs.
*/
Sorcerer &Sorcerer::operator=(const Sorcerer &rhs) {
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
}

/* :> Print Sorcerer
	 - Prints the sorcerer in the format for the output stream.
*/
void Sorcerer::print(std::ostream &o) const {
	o << "I am " << this->_name + ", " + this->_title + ", and I like ponies!"
	  << std::endl;
}

/* :> polymorph
	 - polymorphs a Victim
*/
void Sorcerer::polymorph(const Victim &victim) const {
	victim.getPolymorphed();
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << _title << ", "
			  << "is dead. Consequences will never be the same !" << std::endl;
}

/* << operator overload.
 */
std::ostream &operator<<(std::ostream &o, const Sorcerer &rhs) {
	rhs.print(o);
	return o;
}
