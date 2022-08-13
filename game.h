//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// EASY SDL2 Games in C++
// Usage License Information: AS-IS           
// Description : Pong project file
// All Rights Reserved 2022.
//------------------------------------------------------------------

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<SDL2/SDL_mixer.h>
#include<SDL2/SDL_ttf.h>

class Game    // Center part of the Program.. can be renamed to match your game type                              
{                                           
public:    // Access modifer    
                             
    Game(); // Constructor for the game class                                
    ~Game() = default;  // Deconstructor   
    
    // Member Functions of the "possible" Game class .. can be expanded or decreased                
    void init_SDL_Systems();// Turns on SDL2 Subsystems 
    void loadResources();// tries to load in .png images,audio(Music/SFX) ,text font and files
    void gameStart();  // Starts the game loop
    void inputActions(); // Checks for keyboard or mouse events   
    void gameLogic();// handles game rules such as collision detection                 
    void updateValues(double delta_time);// Changes values needed to show object motion      
    void drawTilemap();// draws the background to the screen and or tilemap images  
    void drawPlayerObjectGraphics();// Regulates FPS for Animations and Draws the Game Screen     
    void showScore();// Draws font information or graphics to the screen for the HUD                        
    void cleanUpGame();// turns off all systems and frees up memory
    
    
private:    // Member variables related to the game window    
                             
    SDL_Window   *m_game_window;           
    SDL_Event     m_game_window_event;      
    SDL_Renderer *m_game_window_renderer;   
    
};                                          
