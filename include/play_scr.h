#include "includes.h"
#include "curr_screen.h"

class play_scr : public curr_screen
{
    private:
    sf::CircleShape circle;
    public:
    play_scr(sf::RenderWindow* win,std::stack<curr_screen*>* scr);

    void init_variables();
    void update();
    void render();
};