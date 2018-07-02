#include "Divine.h"

int main(void) {
	Divine gl;
	/* Game Loop */
	while (gl.isRunning) {
		gl.update();
		usleep(1600);
	}
	system("kill `pgrep afplay`");
	return 0;
}
