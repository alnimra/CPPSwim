/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                             :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_H
#define Point_H

#include <iostream>
#include <string>

class Point {
  public:
	Point();
	Point(const Point &pt);
	Point &operator=(const Point &rhs);
	Point(int x, int y);
	~Point();

	int x;
	int y;
};

#endif
