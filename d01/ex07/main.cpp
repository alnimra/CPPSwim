/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:44:33 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 21:44:33 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void replaceAllOccurancesOfS1inStrtoS2(std::string &str, std::string s1,
									   std::string s2) {
	std::string::size_type n = 0;
	while ((n = str.find(s1, n)) != std::string::npos) {
		str.replace(n, s1.size(), s2);
		n += s2.size();
	}
}

void replace(std::string filename, std::string s1, std::string s2) {
	std::ifstream file;
	std::ofstream newFile;
	file.open(filename);
	if (!file.is_open()) {
		std::cout << "File opening error." << std::endl;
		exit(1);
	}
	newFile.open(filename + ".replace");
	if (!newFile.is_open()) {
		std::cout << "File creation error." << std::endl;
		exit(1);
	}
	// Search through the file, and check if it's s1, if it is, then replace
	// with s2
	std::string fileLine;
	while (std::getline(file, fileLine)) {
		replaceAllOccurancesOfS1inStrtoS2(fileLine, s1, s2);
		newFile << fileLine;
		newFile << "\n";
	}
	file.close();
	newFile.close();
}

int main(int argc, char **argv) {
	if (argc == 4) {
		replace((std::string)argv[1], (std::string)argv[2],
				(std::string)argv[3]);
	} else
		std::cout << "Need 3 string as args..., filename, string1, string2"
				  << std::endl;
	return 0;
}
