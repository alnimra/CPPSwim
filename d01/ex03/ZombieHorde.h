#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.h"

class ZombieHorde {
  public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();

  private:
	int _hordeSize;
	Zombie **_horde;
};

#endif
