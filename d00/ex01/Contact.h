/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:18:35 by mray              #+#    #+#             */
/*   Updated: 2018/06/25 12:18:38 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
  public:
	Contact(std::string firstName_, std::string lastName_, std::string nickname_,
			std::string login_, std::string postalAddress_,
			std::string emailAddress_, std::string phoneNumber_,
			std::string birthdayDate_, std::string favoriteMeal_,
			std::string underwearColor_, std::string darkestSecret_);
	~Contact(void);

  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
};

#endif
