/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 11:05:27 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 11:05:29 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak() {
	std::string *panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
