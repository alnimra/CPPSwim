/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:22:40 by mray              #+#    #+#             */
/*   Updated: 2018/06/30 23:22:40 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other) {
	*this = other;
	return;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I'll be back ..." << std::endl;
	return;
}

AssaultTerminator &AssaultTerminator::
				   operator=(AssaultTerminator const &other) {
	(void)other;
	return (*this);
}

ISpaceMarine *AssaultTerminator::clone(void) const {
	AssaultTerminator *clone = new AssaultTerminator(*this);
	return clone;
}

void AssaultTerminator::battleCry(void) const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
