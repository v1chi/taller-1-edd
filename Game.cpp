#include <bits/stdc++.h>
#include "Software.h"
#include "Game.h"
using namespace std;

/*
    Game(string name, string developer, int price, string genre);
    ~Game();
    string getGenre();
*/

Game::Game(string name, string developer, int price, string genre):Software(name, developer, price)
{
    this->genre=genre;
};
