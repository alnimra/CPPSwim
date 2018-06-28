/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:00:43 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 16:00:44 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main(){
	std::string brainStr = "HI THIS IS BRAIN";
	std::string *brianStrPtr = &brainStr;
	std::string &brianStrRef = brainStr;

	std::cout << "BrainStr Print: " << brainStr << std::endl;
	std::cout << "BrainStrPtr Print: " << *brianStrPtr << std::endl;
	std::cout << "BrainStrReference Print: " << brianStrRef << std::endl;
}
