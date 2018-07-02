/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.h                                             :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Enemy_H
#define Enemy_H

#include "AEntity.h"
#include <iostream>
#include <string>

class Enemy : public AEntity {
  public:
	Enemy();
	Enemy(const Enemy &Enemy);
	Enemy &operator=(const Enemy &rhs);
	Enemy(int hp, std::string const &type, int maxHp);
	void die();
	void attack();
	virtual ~Enemy();

};

#endif
