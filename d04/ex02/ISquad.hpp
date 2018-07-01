/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:22:41 by mray              #+#    #+#             */
/*   Updated: 2018/06/30 23:22:41 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
#define ISQUAD_H

class ISquad {
  public:
	virtual ~ISquad() {}
	virtual int			  getCount() const = 0;
	virtual ISpaceMarine *getUnit(int) const = 0;
	virtual int			  push(ISpaceMarine *) = 0;
};

#endif
