/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlyingPunch.h                                              :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FlyingPunch_H
#define FlyingPunch_H

#include "AEntity.h"
#include "AAtk.h"
#include <curses.h>
#include <iostream>
#include <string>
#include <unistd.h>

class FlyingPunch : public AAtk{
  public:
	FlyingPunch();
	FlyingPunch(const FlyingPunch &FlyingPunch);
	FlyingPunch &operator=(const FlyingPunch &rhs);
	void execute(AEntity **entities, int numEntites);
	void init(const Point &loc);
	~FlyingPunch();
};

#endif
