/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 10:49:22 by mray              #+#    #+#             */
/*   Updated: 2018/06/27 10:49:24 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class Pony {
  public:
	Pony(std::string color);
	~Pony(void);
	Pony *ponyOnTheHeap(std::string color);
	Pony ponyOnTheStack(std::string color);

  private:
	std::string _color;
};

#endif
