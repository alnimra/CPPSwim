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

const int Fixed::_numOfFractionalBits = 8;

Fixed::Fixed() : _val(0){
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &f){
	std::cout << "Copy constructor called." << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &rhs){
	std::cout << "Assignation operator called." << std::endl;
	if(this == &rhs)
		return *this;
	_val = rhs.getRawBits();
	return *this;
}
int Fixed::getRawBits()const{
	std::cout << "getRawBits member function called" << std::endl;
	return _val;
}
void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_val = raw;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}
