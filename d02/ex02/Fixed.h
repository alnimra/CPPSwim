/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <cmath>
#include <iostream>

class Fixed {
  public:
	Fixed();
	Fixed(const Fixed &f);
	Fixed &operator=(const Fixed &rhs);
	Fixed(const int f);
	Fixed(const float f);
	float toFloat() const;
	int   toInt() const;
	int   getRawBits() const;
	void  setRawBits(int const raw);
	~Fixed();

  private:
	int				 _val;
	const static int _numOfFractionalBits;
};

std::ostream &operator<<(std::ostream &o, const Fixed &rhs);

#endif
