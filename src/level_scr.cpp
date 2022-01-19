#include "include_scr.h"


level_scr::level_scr(sf::RenderWindow* win,std::stack<curr_screen*>* scr)
{
    init_variables();
    window=win;
    screen_ptr=scr;
}
void level_scr::init_variables()
{
    circle.setRadius(200.0);
    circle.setFillColor(sf::Color::Blue);
    circle.setPosition(300.0,300.0);

}

void level_scr::update()
{
    sf::Event event;
    while(window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
                window->close();
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window->close();
    }
}
void level_scr::render()
{
     window->clear();
    window->draw(circle);
    // for loop to draw all the sprites
    window->display();
}
