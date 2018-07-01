/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.h                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.h"
#include <iostream>
#include <string>

class PowerFist : public AWeapon{
  public:
	PowerFist();
	PowerFist(const PowerFist &PowerFist);
	PowerFist &operator=(const PowerFist &rhs);

	void attack() const;
	~PowerFist();
};

#endif
