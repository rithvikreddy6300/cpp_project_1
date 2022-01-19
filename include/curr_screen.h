#ifndef CURR_WINDOW_H
#define CURR_WINDOW_H
#include "includes.h"

class curr_screen
{
    private:
    sf::CircleShape shape;
    
    public:
    // curr_screen(sf::RenderWindow* win,std::stack<curr_screen*>* scr);
    sf::RenderWindow* window;
    std::stack<curr_screen*> * screen_ptr;
    virtual ~curr_screen(){}
    virtual void init_variables()=0;
    virtual void update()=0;
    virtual void render()=0;
    void set_window(sf::RenderWindow* win);
    void set_screen(std::stack<curr_screen*> *ptr);

};
#endif