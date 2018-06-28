/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:07:52 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 16:07:52 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

/* :> Brain Default Constructor
*/
Brain::Brain(){
	std::cout << "Brain SHOCKED ALIVE"
	<< std::endl;
}

/* :> Brain Deconstructor
*/
Brain::~Brain(){
	std::cout << "Brain: dead"
	<< std::endl;
}

/* :> Brain::identify
	- Returns: the address of the brain.
*/
std::string Brain::identify() const{
	std::stringstream in;
	in << this;
	return in.str();
}
