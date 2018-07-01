/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:22:41 by mray              #+#    #+#             */
/*   Updated: 2018/06/30 23:22:41 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _list(NULL), _numUnits(0) { return; }

Squad::Squad(Squad &other) {
	*this = other;
	return;
}

Squad::~Squad(void) {
	t_marineList *curr = this->_list;
	t_marineList *temp = curr;
	while (curr) {
		curr = curr->next;
		delete temp->marine;
		delete temp;
		temp = curr;
	}
}

Squad &Squad::operator=(Squad &other) {
	this->_list = other._list;

	t_marineList *temp;

	while (this->_list) {
		temp = this->_list->next;
		delete this->_list->marine;
		delete this->_list;
		this->_list = temp;
	}
	delete temp;

	t_marineList *curr = this->_list;
	t_marineList *ol = other._list;

	while (ol) {
		if (!this->_list) {
			this->_list = new t_marineList;
			this->_list->marine = ol->marine->clone();
			this->_list->next = NULL;
			curr = this->_list;
		} else {
			curr->next = new t_marineList;
			curr->next->next = NULL;
			curr->next->marine = ol->marine->clone();
			curr = curr->next;
		}
		ol = ol->next;
	}
	return (*this);
}

int Squad::getCount(void) const { return (this->_numUnits); }

ISpaceMarine *Squad::getUnit(int n) const {
	t_marineList *curr = this->_list;
	if (n < this->getCount()) {
		while (curr && n > 0) {
			curr = curr->next;
			n--;
		}
		if (n == 0)
			return (curr->marine);
	}
	return (NULL);
}

int Squad::push(ISpaceMarine *marine) {
	t_marineList *curr = this->_list;
	if (marine && curr) {
		while (curr->next) {
			if (curr->marine == marine)
				break;
			curr = curr->next;
		}
		if (curr->marine == marine)
			return (this->_numUnits);
		else {
			curr->next = new t_marineList;
			curr = curr->next;
			curr->marine = marine;
			curr->next = NULL;
			this->_numUnits++;
		}
	} else if (marine) {
		this->_list = new t_marineList;
		this->_list->marine = marine;
		this->_list->next = NULL;
		this->_numUnits++;
	}
	return (this->_numUnits);
}
