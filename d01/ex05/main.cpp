/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:08:10 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 16:08:10 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.h"

int main() {
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
