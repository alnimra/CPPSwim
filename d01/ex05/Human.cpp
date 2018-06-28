/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:08:06 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 16:08:06 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.h"

/* :> Human Default Constructor
*/
Human::Human(){
	std::cout << "Human BREATHES ALIVE"
	<< std::endl;
}

/* :> Human Deconstructor
*/
Human::~Human(){
	std::cout << "Human: dead"
	<< std::endl;
}

/* :> Human::getBrain
	- Returns: the address of the Human's brain.
*/
const Brain &Human::getBrain(){
	return noumiso;
}

/* :> Human::identify
	- Returns: the address of the Human's brain.
*/
std::string Human::identify(){
	return noumiso.identify();
}
