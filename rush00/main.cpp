#include "Divine.h"

int main(void) {
	Divine gl;
	/* Game Loop */
	while(gl.isRunning){
		gl.update();
	}
	return 0;
}
