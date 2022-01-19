#include "includes.h"
#include "curr_screen.h"

class main_scr : public curr_screen
{
    private:
    sf::Sprite play_button;
    sf::Sprite exit_button;
    sf::Sprite settings_button;
    sf::Sprite high_scr_button;
    sf::Sprite create_lvl_button;
    sf::CircleShape shape;
    

    public:
    // main_scr();
    main_scr(sf::RenderWindow* win,std::stack<curr_screen*>* scr);
    void init_variables();
    void update();
    void render();


};