#include "include_scr.h"

main_scr::main_scr(sf::RenderWindow* win,std::stack<curr_screen*>* scr)
{
    init_variables();
    window=win;
    screen_ptr=scr;
}
void main_scr::init_variables()
{
    shape.setRadius(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(100.0,100.0);
    // iinit all the buttons and locations here
}

void main_scr::update()
{
    sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
                // should push the quit screen in to the stack
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window->close();
                // should push the quit screen in to the stack
            else if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                if(shape.getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*window)))
                screen_ptr->push(new level_scr(window,screen_ptr));
                if(play_button.getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*window)))
                screen_ptr->push(new level_scr(window,screen_ptr));
                else if(settings_button.getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*window)))
                screen_ptr->push(new settings_scr(window,screen_ptr));
                else if(create_lvl_button.getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*window)))
                screen_ptr->push(new create_lvl_scr(window,screen_ptr));
                else if(exit_button.getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*window)))
                screen_ptr->push(new quit_scr(window,screen_ptr));
                // various actions for various buttoms

            }
            // code for changing colours
            else if(event.type== sf::Event::MouseMoved)
            {
                // for every sprite check if intersection happen and reset
                if(shape.getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*window)))
                shape.setFillColor(sf::Color::Red);
                else
                shape.setFillColor(sf::Color::Green);

            }
        }
}
void main_scr::render()
{
    window->clear();
    // I may also have a text box displaing saying welcome to game or some thing
    // better to put them all in a vector and use a auto for loop
    // -- learn how to use iterator
    window->draw(shape);
    window->draw(play_button);
    window->draw(create_lvl_button);
    window->draw(settings_button);
    window->draw(exit_button);
    // for loop to draw all the sprites
    window->display();
}