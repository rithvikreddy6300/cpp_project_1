#include "includes.h"
#include "curr_screen.h"

class create_lvl_scr : public curr_screen
{
    private:
    sf::CircleShape circle;
    public:
    create_lvl_scr(sf::RenderWindow* win,std::stack<curr_screen*>* scr);

    void init_variables();
    void update();
    void render();
};