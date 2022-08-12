//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// EASY SDL2 Games in C++
// Usage License Information: AS-IS           
// Description : Creating a Window using the Simple Directmedia
// Layer 2.0 using the C++ programming language.
// All Rights Reserved 2022.
//------------------------------------------------------------------

// compile for a Linux like system :  g++ filename.cpp -lSDL -o program_name
#include <SDL2/SDL.h>

SDL_Window *window;
SDL_Surface *window_surface;

int main(int argc, char *argv[])
{
	// Turns on the SDL Subsystems
	SDL_Init(SDL_INIT_EVERYTHING);
	
	// Creates the window to a desired location and size
	window= SDL_CreateWindow("SDL Window Program",SDL_WINDOWPOS_CENTERED,    SDL_WINDOWPOS_CENTERED ,800,600, SDL_WINDOW_SHOWN);
	
	// Stores the contents of the window to a piece of memory called window_surface
	window_surface = SDL_GetWindowSurface(window);
	
	// Shows the screen
	SDL_UpdateWindowSurface(window);
	
	//Destorys the Window
	SDL_DestoryWindow(window);
	
	// Turns off the SDL subsystems
	SDL_Quit();

}
