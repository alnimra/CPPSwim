/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 10:49:29 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 10:49:31 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.h"

Pony* ponyOnTheHeap(std::string color) { return new Pony(color); }
Pony ponyOnTheStack(std::string color) { return Pony(color); }

int main(void){
	Pony *pHeap = ponyOnTheHeap("red");
	ponyOnTheStack("blue");
	delete pHeap;
	return 0;
}
