#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.h"

class ZombieEvent {
  public:
	ZombieEvent(std::string type);
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie *randomChump();
	Zombie *newZombie(std::string name);

  private:
	std::string _type;
};

#endif
