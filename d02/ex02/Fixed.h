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

	bool operator>(const Fixed &rhs);
	bool operator<(const Fixed &rhs);
	bool operator>=(const Fixed &rhs);
	bool operator<=(const Fixed &rhs);
	bool operator==(const Fixed &rhs);
	bool operator!=(const Fixed &rhs);

	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;

	Fixed &operator--();
	Fixed operator--(int);
	Fixed &operator++();
	Fixed operator++(int);
	~Fixed();

	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);

  private:
	int				 _val;
	static const int _numOfFractionalBits;
};

std::ostream &operator<<(std::ostream &o, const Fixed &rhs);

#endif
