/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:50:43 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 22:50:43 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

class Human {
  private:
	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void intimidatingShout(std::string const &target);

  public:
	void action(std::string const &action_name, std::string const &target);
};

#endif
