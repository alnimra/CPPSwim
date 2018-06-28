/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 11:44:23 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 11:44:24 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.h"

int main(void) {
	ZombieEvent event("heap");
	Zombie		zombieOnStack("onStackk", "stack");
	zombieOnStack.announce();
	Zombie *peterPan = event.newZombie("PeterPan");
	peterPan->announce();
	Zombie *randomAnnouncers[4];
	event.setZombieType("rnd");
	for (int i = 0; i < 4; i++) {
		randomAnnouncers[i] = event.randomChump();
		randomAnnouncers[i]->announce();
	}
	for (int i = 0; i < 4; i++) {
		delete randomAnnouncers[i];
	}
	delete peterPan;
}
