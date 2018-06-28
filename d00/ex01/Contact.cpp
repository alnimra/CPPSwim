/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:18:28 by mray              #+#    #+#             */
/*   Updated: 2018/06/25 12:18:30 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

/* :> Contructor for Contact Class
*/
Contact::Contact(std::string firstName_, std::string lastName_,
				 std::string nickname_, std::string login_,
				 std::string postalAddress_, std::string emailAddress_,
				 std::string phoneNumber_, std::string birthdayDate_,
				 std::string favoriteMeal_, std::string underwearColor_,
				 std::string darkestSecret_)
	: firstName(firstName_), lastName(lastName_), nickname(nickname_),
	  login(login_), postalAddress(postalAddress_), emailAddress(emailAddress_),
	  phoneNumber(phoneNumber_), birthdayDate(birthdayDate_),
	  favoriteMeal(favoriteMeal_), underwearColor(underwearColor_),
	  darkestSecret(darkestSecret_) {}
