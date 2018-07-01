/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.h                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.h"
#include <iostream>
#include <string>

class PlasmaRifle : public AWeapon{
  public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &PlasmaRifle);
	PlasmaRifle &operator=(const PlasmaRifle &rhs);

	void attack() const;
	~PlasmaRifle();
};

#endif
