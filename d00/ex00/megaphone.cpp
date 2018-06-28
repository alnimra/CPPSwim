/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:43:51 by mray              #+#    #+#             */
/*   Updated: 2018/06/25 10:43:54 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string makeUppercase(std::string *str) {
	std::locale loc;

	for (std::string::size_type i = 0; i < (*str).length(); i++)
		(*str)[i] = std::toupper((*str)[i], loc);
	return *str;
}

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else if (argc > 1) {
		std::string tempStr;
		for (int i = 1; i < argc; i++){
			tempStr = (std::string)argv[i];
			std::cout << (makeUppercase(&tempStr));
		}
		std::cout << std::endl;
	}
}
