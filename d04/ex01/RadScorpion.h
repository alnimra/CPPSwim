/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.h                                       :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RadScorpion_H
#define RadScorpion_H

#include <iostream>
#include <string>

#include "Enemy.h"

class RadScorpion : public Enemy {
  public:
	RadScorpion();
	RadScorpion(const RadScorpion &RadScorpion);
	RadScorpion &operator=(const RadScorpion &rhs);

	void takeDamage(int amount);
	~RadScorpion();

};

#endif
