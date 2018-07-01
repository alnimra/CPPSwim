/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:22:40 by mray              #+#    #+#             */
/*   Updated: 2018/06/30 23:22:40 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
#define ISPACEMARINE_H

#include <iostream>

class ISpaceMarine {
  public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine *clone() const = 0;
	virtual void		  battleCry() const = 0;
	virtual void		  rangedAttack() const = 0;
	virtual void		  meleeAttack() const = 0;
};

#endif
