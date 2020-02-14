#include "Game.h"
#include "map/FastNoise.h"
#include <zlib.h>
Game *game = nullptr;



int main(int argc, char *argv[])
{
	

	

	game = new Game();
	std::string e = "Greg's Wacky Adventures   BBQGiraffe Games 2020";

   game->init(e.c_str(), 1024, 768, false);


	
	while (1)
	{
		
		game->update();
		
	}
	
	//game->clean();
	return 0;
}


