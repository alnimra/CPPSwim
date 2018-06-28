/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:51:09 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 22:51:09 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.h"

int main(){
	Human player;
	std::string actionsStrs[] = {"melee", "range", "shout"};
	for(int i = 0; i < 3; i++)
		player.action(actionsStrs[i], "enemy");
	return 0;
}
