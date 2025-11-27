#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Enemy.h"
#include <vector>

class Game {
private:
    sf::RenderWindow window;
    Player player;
    std::vector<Enemy> enemies;
    int score;
    void processEvents();
    void update();
    void render();
public:
    Game();
    void run();
};
