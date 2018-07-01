/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cc                                          :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.h"
#include <ctime>
/* :> Default Constructor
 */
Victim::Victim(const std::string name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped !"
			  << std::endl;
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Victim::Victim(const Victim &Victim) { *this = Victim; }

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the Victim to the rhs.
*/
Victim &Victim::operator=(const Victim &rhs) {
	std::cout << "Some random victim called " << this->_name << " just popped !"
			  << std::endl;
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	return *this;
}

/* :> Print Victim
	 - Prints the Victim in the format for the output stream.
*/
void Victim::print(std::ostream &o) const {
	o << "I'm " << this->_name + " and I like otters!" << std::endl;
}

/* :> polymorph
	 - polymorphs a Victim
*/
void Victim::getPolymorphed() const {
	std::cout << this->_name + " has been turned into a cute little sheep !"
			  << std::endl;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Victim::~Victim() {
	std::cout << "Victim " << this->_name
			  << " just died for no apparent reason !" << std::endl;
}

/* << operator overload.
 */
std::ostream &operator<<(std::ostream &o, const Victim &rhs) {
	rhs.print(o);
	return o;
}
