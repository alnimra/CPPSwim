/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:19:08 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 18:19:08 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "HumanB.h"

int main(){
	Weapon w1("crude spiked club");
	Weapon w2("crude not-spiked club");
	HumanA humana(&w1, "HumanA");
	HumanA humanb(&w2, "HumanB");

	humana.attack();
	humanb.attack();
}
