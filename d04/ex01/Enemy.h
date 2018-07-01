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

#include <iostream>
#include <string>

class Enemy {
  public:
	Enemy();
	Enemy(const Enemy &Enemy);
	Enemy &operator=(const Enemy &rhs);
	Enemy(int hp, std::string const & type);

	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int amount);
	virtual ~Enemy();

  private:
	int _hp;
	std::string _type;
};

#endif
