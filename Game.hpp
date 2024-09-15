#ifndef GAME_HPP
#define GAME_HPP

#include "Room.hpp"
#include "Player.hpp"
#include <vector>
#include <iostream>

class Game {
public:
    Game();  // Constructorul care inițializează jocul
    void start();  // Metoda care pornește jocul
    
private:
    std::vector<Room> rooms;  // Lista de camere din joc
    Player player;  // Obiectul care reprezintă jucătorul
    int currentRoom;  // Indexul camerei curente
    void displayCurrentRoom();  // Afișează descrierea și opțiunile camerei curente
    void chooseOption();  // Permite jucătorului să aleagă o opțiune din cameră
};

#endif // GAME_HPP
