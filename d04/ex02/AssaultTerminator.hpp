/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:22:40 by mray              #+#    #+#             */
/*   Updated: 2018/06/30 23:22:40 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
  public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &other);
	virtual ~AssaultTerminator(void);
	AssaultTerminator &operator=(AssaultTerminator const &other);

	ISpaceMarine *clone(void) const;
	void		  battleCry(void) const;
	void		  rangedAttack(void) const;
	void		  meleeAttack(void) const;
};

#endif
