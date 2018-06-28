/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:08:03 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 16:08:03 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.h"

class Human {
  public:
	Human();
	~Human();
	std::string identify();
	const Brain &getBrain();

  private:
	const Brain noumiso;
};

#endif
