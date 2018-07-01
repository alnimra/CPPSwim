#include "Sorcerer.h"
#include "Victim.h"
#include "Peon.h"

int main() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim   jim("Jimmy");
	Peon	 joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}
