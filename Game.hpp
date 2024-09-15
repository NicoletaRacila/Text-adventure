#ifndef GAME_HPP
#define GAME_HPP

#include "Room.hpp"
#include "Player.hpp"
#include <vector>
#include <iostream>

class Game {
public:
    Game();  
    void start();  
    
private:
    std::vector<Room> rooms;  
    Player player; 
    int currentRoom;  
    void displayCurrentRoom();  
    void chooseOption();  
};

#endif
