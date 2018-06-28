#include "ZombieHorde.h"
#include <cstdlib>

/* :> ZombieHorde Constructor
 */
ZombieHorde::ZombieHorde(int N) : _hordeSize(N) {
	_horde = new Zombie*[N];
	for (int i = 0; i < N; i++)
		_horde[i] = new Zombie(std::to_string(rand() % 100),
							  std::to_string(rand() % 1000));
	std::cout << "Created a Zombie horde of size: " << N << std::endl;
}

/* :> ZombieHorde Deconstructor
 */
void ZombieHorde::announce() {
	for (int i = 0; i < _hordeSize; i++)
		_horde[i]->announce();
	std::cout << "ZombieHorde finished announcing!!!!!!!" << std::endl;
}

/* :> ZombieHorde Deconstructor
 */
ZombieHorde::~ZombieHorde() {
	for (int i = 0; i < _hordeSize; i++)
		delete _horde[i];
	delete []_horde;
	std::cout << "ZombieHorde is eliminated" << std::endl;
}
