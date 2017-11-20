/*Code and engine made by Titan Game Studios 2016/2017 coded by Luiz Nai.*/
#include "game.h"
#include <kos.h>

/* romdisk set the Dreamcast romdisk */
extern uint8 romdisk[];
KOS_INIT_FLAGS(INIT_DEFAULT | INIT_MALLOCSTATS);
KOS_INIT_ROMDISK(romdisk);

/////General function of the game
int main(int argc, char** argv) 
{
	game g;
	g.start();
	return 0;
}