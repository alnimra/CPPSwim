#include "FragTrap.h"

int main(void) {
	FragTrap f1("f1");
	FragTrap f2;
	f2 = f1;
	f2 = FragTrap("f2");

	f1.meleeAttack(f2.getName());
	f2.takeDamage(f2.getMeleeAtkDmg());
	f1.rangedAttack(f2.getName());
	f1.beRepaired(4);

	f1.meleeAndRangedAttack(f2.getName());
	f2.takeDamage(f2.getMeleeAtkDmg() + f2.getRangedAtkDmg());
	f1.rangedAndMeleeAttack(f2.getName());
	f2.takeDamage(f2.getMeleeAtkDmg() + f2.getRangedAtkDmg());
	f1.sleepAttack(f2.getName());
	f2.takeDamage(0);

	f1.vaulthunter_dot_exe(f2.getName());
	return 0;
}
