#include "ZombieEvent.h"
#include <cstdlib>

/* :> ZombieEvent Constructor
 */
ZombieEvent::ZombieEvent(std::string type) : _type(type) {
	std::cout << "Created a Zombie Event of Type" << type << std::endl;
}

/* :> ZombieEvent setZombieType
 */
void ZombieEvent::setZombieType(std::string type) { this->_type = type; }

/* :> ZombieEvent newZombie
 */
Zombie *ZombieEvent::newZombie(std::string name) {
	return new Zombie(name, this->_type);
}

/* :> ZombieEvent randomChump
 */
Zombie *ZombieEvent::randomChump() {
	Zombie *zombie = new Zombie(std::to_string(rand() % 100), this->_type);
	zombie->announce();
	return zombie;
}

/* :> ZombieEvent Deconstructor
 */
ZombieEvent::~ZombieEvent() {
	std::cout << "ZombieEvent is eliminated" << std::endl;
}
