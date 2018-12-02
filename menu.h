#ifndef _MENU_H_
#define _MENU_H_

#include <SDL2/SDL.h>
#include "map.h"
#include "button.h"

enum CurrentMenu {None, Main, Pause, GameOver};
enum Difficulty {Easy, Normal, Hard};

class Menu
{
	public:
        Menu();
        bool check_hover(ushort button_id); //returns true if the mouse is over a button and calls handme_click if a mouse button is pressed
        void handle_click(ushort button_id); //handle the buttons logic
        bool wants_to_quit = false; //true if the player want close the game
        CurrentMenu current = Main; //currently displayed menu
        bool mouse_down = false; //true if a mouse button down during this frame, this is handled by the class Player
        Difficulty difficulty = Normal;
        Button buttons[5]; //UI buttons

        ~Menu();

        //copy constructor to avoid warning in c++11
        //Menu(const Menu& m) : Menu(p.map) {};
        //Menu& operator=(Menu p);

    private:
        
};

#endif