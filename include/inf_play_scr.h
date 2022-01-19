#include "includes.h"
#include "curr_screen.h"

class inf_play_scr : public curr_screen
{
    private:
    sf::CircleShape circle;
    public:
    inf_play_scr(sf::RenderWindow* win,std::stack<curr_screen*>* scr);

    void init_variables();
    void update();
    void render();
};