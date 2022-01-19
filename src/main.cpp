#include "includes.h"
#include "include_scr.h"



int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Game ",sf::Style::Default);
    std::stack<curr_screen*> screen;
    // you can change the windo style and use multiple styles by using | symbol
    window.setFramerateLimit(60);
    screen.push(new main_scr(&window,&screen));
    curr_screen *curr_screen=screen.top();
    

    while (window.isOpen())
    {
        if(curr_screen!=screen.top())
        curr_screen=screen.top();
        curr_screen->update();
        // update

        // render
        curr_screen->render();
        // window.display();

        
    }

    return 0;
}