/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyGroup.h                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:05 by mray              #+#    #+#             */
/*   Updated: 2018/06/28 12:08:05 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EnemyGroup_H
#define EnemyGroup_H

#include "AEntity.h"
#include <iostream>
#include <string>

class EnemyGroup {
  public:
	EnemyGroup();
	EnemyGroup(const EnemyGroup &EnemyGroup);
	EnemyGroup &operator=(const EnemyGroup &rhs);
	EnemyGroup(int N);

	void attack(AEntity &entity);
	virtual ~EnemyGroup();
	private:
		int entityQuantity;
		Enemy **enemies;

};

#endif
