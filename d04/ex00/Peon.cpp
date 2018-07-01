/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cc                                              :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:14 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:14 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.h"

/* :> Default Constructor
 */
Peon::Peon(const std::string name) : Victim(name){
	std::cout << this->_name + ": Zog zog."<< std::endl;
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Peon::Peon(const Peon &peon) : Victim(peon){
	*this = peon;
}

/* :> = op Overload: Assignation operator
	- Copies all the member variables of the Peon to the rhs.
*/
Peon &Peon::operator=(const Peon &rhs) {
	std::cout << this->_name + ": Zog zog."<< std::endl;
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	return *this;
}

/* :> polymorph
	 - polymorphs a Peon
*/
void Peon::getPolymorphed() const {
	std::cout << this->_name + " has been turned into a pink pony !"
			  << std::endl;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Peon::~Peon() {
	std::cout << this->_name + ": Bleuark..."<< std::endl;
}

/* << operator overload.
 */
std::ostream &operator<<(std::ostream &o, const Peon &rhs) {
	rhs.Victim::print(o);
	return o;
}
