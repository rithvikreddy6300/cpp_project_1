#include "curr_screen.h"
// #include "includes.h"

// curr_screen::curr_screen(sf::RenderWindow* win,std::stack<curr_screen*> *scr)
// {
//     window=win;
//     screen_ptr=scr;
//     // init_variables();
// }

void curr_screen::set_window(sf::RenderWindow* win)
{
    window=win;
}
void curr_screen::set_screen(std::stack<curr_screen*> *ptr)
{
    screen_ptr=ptr;
}
