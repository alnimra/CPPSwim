/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.h                                       :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperMutant_H
#define SuperMutant_H

#include <iostream>
#include <string>

#include "Enemy.h"

class SuperMutant : public Enemy {
  public:
	SuperMutant();
	SuperMutant(const SuperMutant &SuperMutant);
	SuperMutant &operator=(const SuperMutant &rhs);

	void takeDamage(int amount);
	~SuperMutant();

};

#endif
