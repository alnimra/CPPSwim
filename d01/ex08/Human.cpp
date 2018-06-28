/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:51:03 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 22:51:03 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.h"

void Human::meleeAttack(std::string const &target) {
	std::cout << "Melee Attacking " << target << std::endl;
}
void Human::rangedAttack(std::string const &target) {
	std::cout << "Range Attacking " << target << std::endl;
}
void Human::intimidatingShout(std::string const &target) {
	std::cout << "Intimidatingly Shouting at " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target) {
	std::string actionsStrs[] = {"melee", "range", "shout"};
	typedef void (Human::*Action)(const std::string &target);
	Action actionFxs[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	for (int i = 0; i < 3; i++) {
		if (actionsStrs[i] == action_name) {
			(this->*(actionFxs[i]))(target);
			return;
		}
	}
}
