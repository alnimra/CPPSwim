/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:03:16 by mray              #+#    #+#             */
/*   Updated: 2018/06/25 12:03:20 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include "Contact.h"

class PhoneBook{
	public:
		void exit(void);
		void addContact(Contact *contact);
		int getNumberOfContacts(void);
	private:
		Contact contacts[8];
		static int numberOfContacts;
};
#endif
