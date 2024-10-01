#include "Game.hpp"

Game::Game() : currentRoom(0) {
    // Initialize rooms and player
    rooms.emplace_back("You are in a dark room.");
    rooms[0].addOption("Go to the light room.", 1);
    rooms.emplace_back("You are in a light room.");
    rooms[1].addOption("Go back to the dark room.", 0);
    player = Player("Hero");
}

void Game::start() {
    while (true) {
        displayCurrentRoom();
        chooseOption();
    }
}

void Game::displayCurrentRoom() {
    std::cout << rooms[currentRoom].getDescription() << std::endl;
}

void Game::chooseOption() {
    auto options = rooms[currentRoom].getOptions();
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ": " << options[i].first << std::endl;
    }

    int choice;
    std::cout << "Choose an option: ";
    std::cin >> choice;
    if (choice > 0 && choice <= options.size()) {
        currentRoom = options[choice - 1].second;
    }
}
